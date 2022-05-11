#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 2



 void imprimer_grille(int taille, int grille[taille][taille]){
    for (int i=0; i<taille; i++){
        for (int j=0; j<taille; j++){
            printf("%d\t\t",grille[i][j]);
        }
        printf("\n");
    }
}


void creer_masque(int taille, int grille[taille][taille]){  //generer nombre aleatoire entre 0 et 1
    srand(time(NULL));
    int random_number;
    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {
            random_number = rand() %2 ;
            grille[i][j] = random_number;
        }
    }

}

void print_ligne(int taille, int i, int grille[taille][taille]){ // transforme une ligne donne en tableau 1D
    int T[taille];
    for (int j=0; j<taille; j++){
        T[i] = grille[i][j];
    }
}

void jouez (){

}



/*int resolution_grille_jeu(){
    printf("%d",grille_jeu1);//mettre fonction qui génère masque et grille aléatoirement
    for (int i=0, i<4, i++){   // changer 4
        for (int j=0, j<4, j++){
            if(grille_jeu1[i][j]==2){
                grille_jeu1[i][j] = randomnumber();
            }
        }
    }

}*/












