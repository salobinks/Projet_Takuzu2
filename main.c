#include <stdio.h>
#include "grilles.h"
#include "indice.h"
#include "fonctions.h"
#include <stdlib.h>
#define MAX 2


int main() {
    int grille4_solution1[4][4] = {
            {1, 1, 0, 0},
            {0, 0, 1, 1},
            {1, 0, 0, 1},
            {0, 1, 1, 0}
    };
    int grille8_solution1[8][8] = {
            {1, 0, 1, 1, 0, 1, 0, 0},
            {1, 0, 1, 0, 1, 0, 0, 1},
            {0, 1, 0, 1, 1, 0, 1, 0},
            {0, 1, 0, 1, 0, 1, 1, 0},
            {1, 0, 1, 0, 0, 1, 0, 1},
            {0, 1, 0, 0, 1, 0, 1, 1},
            {0, 0, 1, 1, 0, 1, 1, 0},
            {1, 1, 0, 0, 1, 0, 0, 1}
    };
    int choix, choix2;
    printf("MENU :\n 1. A vous de jouer !\n 2. Resolution automatique par la machine\n 3. Generer une grille\n Entrez le numero de votre choix : ");
    scanf("%d", &choix); //faire saisie securisée
    switch (choix) {
        case 1: {
            int taille;
            printf("1. Saisir manuellement un masque\n 2. Generer automatiquement un masque\n 3. Jouer\n Entrez votre choix : ");
            scanf("%d", &choix2);
            printf("Quelle taille de grille souhaitez vous :\n1. 4x4\n2. 8x8\nEntrez 4 ou 8 :  "); //saisie securisee
            scanf("%d", &taille);

            int** grille_jeu;
            grille_jeu = (int**) malloc(taille * sizeof(int*));
            for (int i = 0; i < taille; i++)
            {
                grille_jeu[i] = malloc(taille * sizeof (int));
            }

            int** grille_masque;
            grille_masque = (int**) malloc(taille * sizeof(int*));
            for (int i = 0; i < taille; i++)
            {
                grille_masque[i] = malloc(taille * sizeof (int));
            }

            int** grille_solution;
            grille_solution = (int**) malloc(taille * sizeof(int*));
            for (int i = 0; i < taille; i++)
            {
                grille_solution[i] = malloc(taille * sizeof (int));
            }

            if (choix2 == 1) {
                for (int i = 0; i < taille; i++) {
                    for (int j = 0; j < taille; j++) {
                        printf("Entrez 1 ou 0.\n1 pour faire apparaitre la solution dans la case.\n0 pour laisser la case vide.\n");
                        scanf("%d", &grille_masque[i][j]);  //saisie securisee
                    }
                }
                generer_grille_solution(taille, grille_solution, grille4_solution1);
                creation_grille_jeu(taille, grille_solution, grille_masque,grille_jeu);  //probleme marche que pour grille 4x4 continuer fonction grille_choisie
                printf("Voici votre masque : \n");
                imprimer_grille(taille, grille_masque);
                printf("\n");
                printf("Voici la grille de jeu resultante : \n");
                imprimer_grille(taille, grille_jeu);
            }

            if (choix2 == 2) {
                creer_masque(taille, grille_masque);
                generer_grille_solution(taille, grille_solution, grille4_solution1);
                creation_grille_jeu (taille, grille_solution, grille_masque, grille_jeu);
                printf("Voici votre masque : \n");
                imprimer_grille(taille, grille_masque);
                printf("Voici la grille de jeu resultante : \n");
                imprimer_grille(taille, grille_jeu);
            }
            if (choix2 == 3){

                creer_masque(taille, grille_masque);
                generer_grille_solution(taille, grille_solution, grille4_solution1);
                creation_grille_jeu (taille, grille_solution, grille_masque, grille_jeu);
                printf("Voici la grille de jeu : \n");
                imprimer_grille(taille, grille_jeu);
                printf("\n");

                int i, j, vies = 3;
                do {
                    printf("entrez ligne : ");
                    scanf("%d", &i);
                    printf("entrez colonne : ");
                    scanf("%d", &j);
                    printf("entrez votre reponse");
                    scanf("%d", grille_jeu[i][j]);



                    int somme_ligne = 0;
                    somme_ligne = somme_ligne_jouee(taille, j, grille_jeu);
                    int somme_col;
                    somme_col = somme_col_jouee(taille, i, grille_jeu);
                }
                while (vies > 0);
            }

     }
     break;

        /*case 2:{

        }
     break;
     case 3:{

     }

     }*/
                return 0;
            }
        }


