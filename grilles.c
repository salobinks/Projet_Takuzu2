#include "grilles.h"
#include <stdio.h>
#include <stdlib.h>


//GRILLE 4x4



/*int grille4_masque1[4][4]={
        {0,0,1,0},
        {0,0,0,1},
        {1,0,0,1},
        {0,0,0,0}
};

int grille4_masque2[4][4]={
        {0,0,1,0},
        {0,1,0,1},
        {0,1,0,0},
        {0,0,0,0}
 };



int grille4_solution2[4][4]={
        {0,1,1,0},
        {1,0,1,0},
        {1,0,0,1},
        {0,1,0,1}
};

//GRILLE 8x8

int grille8_solution1[8][8]={
        {1,0,1,1,0,1,0,0},
        {1,0,1,0,1,0,0,1},
        {0,1,0,1,1,0,1,0},
        {0,1,0,1,0,1,1,0},
        {1,0,1,0,0,1,0,1},
        {0,1,0,0,1,0,1,1},
        {0,0,1,1,0,1,1,0},
        {1,1,0,0,1,0,0,1}
};

int grille8_masque1[8][8]={
        {1,0,1,1,0,1,0,1},
        {0,0,1,0,0,0,0,0},
        {1,0,0,0,0,0,0,1},
        {1,0,1,0,0,1,1,0},
        {1,0,0,0,1,0,0,1},
        {0,0,0,0,1,0,0,0},
        {0,1,1,1,1,1,0,0},
        {0,1,0,1,0,0,1,0}
};*/


void creation_grille_jeu(int taille, int grille_solution[taille][taille], int grille_masque[taille][taille], int grille_jeu[taille][taille]){
    for (int i=0; i<taille; i++){
        for (int j=0; j<taille; j++){
            if(grille_masque[i][j] == 1){
                grille_jeu[i][j] = grille_solution[i][j];  //en statique grille_solution
            }
            else if(grille_masque[i][j] == 0){
                grille_jeu[i][j] = 2;
            }
        }
    }
}


void generer_grille_solution(int taille, int grille_solution[taille][taille], int grille_connue[taille][taille]){
    if (taille == 4){
        for (int i=0; i<taille; i++){
            for(int j=0; j<taille; j++){
                grille_solution[i][j] = grille_connue[i][j];
            }
        }
    }
    else if (taille == 8){
        for (int i=0; i<taille; i++){
            for(int j=0; j<taille; j++){
                grille_solution[i][j] = grille_connue[i][j];
            }
        }
    }
}