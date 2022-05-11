#include "indice.h"
#include <stdio.h>


void indice1(int taille, int grille_jeu[taille][taille], int i, int j){
    if( grille_jeu[i][j] == grille_jeu[i][j+1] == 1){
        printf("Deux 1 se suivent à la ligne %d, vous pouvez donc mettre un ou deux 0\n",&i);
    }
    else if( grille_jeu[i][j] == grille_jeu[i][j+1] == 0){
        printf("Deux 0 se suivent à la ligne %d, vous pouvez donc mettre un ou deux 1\n",&i);
    }
    else if( grille_jeu[i][j] == grille_jeu[i][j-1] == 1){
        printf("Deux 1 se suivent à la ligne %d, vous pouvez donc mettre un ou deux 0\n",&i);
    }
    else if( grille_jeu[i][j] == grille_jeu[i][j+1] == 0){
        printf("Deux 0 se suivent à la ligne %d, vous pouvez donc mettre un ou deux 1\n",&i);
    }
    else if( grille_jeu[i][j] == grille_jeu[i+1][j] == 1){
        printf("Deux 1 se suivent à la colonne %d, vous pouvez donc mettre un ou deux 0\n",&j);
    }
    else if( grille_jeu[i][j] == grille_jeu[i+1][j] == 0) {
        printf("Deux 0 se suivent à la colonne %d, vous pouvez donc mettre un ou deux 1\n", &j);
    }
    else if( grille_jeu[i][j] == grille_jeu[i-1][j] == 1) {
        printf("Deux 1 se suivent à la colonne %d, vous pouvez donc mettre un ou deux 0\n", &j);
    }
    else if( grille_jeu[i][j] == grille_jeu[i-1][j] == 0) {
        printf("Deux 0 se suivent à la colonne %d, vous pouvez donc mettre un ou deux 1\n", &j);
    }
}

void indice2(int taille, int grille_jeu[taille][taille], int i, int j){
    if( grille_jeu[i][j] == grille_jeu[i][j+2] == 1) {
        printf("A la ligne %d, il ne peut y avoir qu'un 0 entre les deux 1 \n", &i);
        }
    else if( grille_jeu[i][j] == grille_jeu[i][j+2] == 0) {
        printf("A la ligne %d, il ne peut y avoir qu'un 1 entre les deux 0 \n", &i);
    }
    else if( grille_jeu[i][j] == grille_jeu[i][j-2] == 1) {
        printf("A la ligne %d, il ne peut y avoir qu'un 0 entre les deux 1 \n", &i);
    }
    else if( grille_jeu[i][j] == grille_jeu[i][j-2] == 0) {
        printf("A la ligne %d, il ne peut y avoir qu'un 1 entre les deux 0 \n", &i);
    }
    else if( grille_jeu[i][j] == grille_jeu[i+2][j] == 1) {
        printf("A la colonne %d, il ne peut y avoir qu'un 0 entre les deux 1 \n", &j);
    }
    else if( grille_jeu[i][j] == grille_jeu[i+2][j] == 0) {
        printf("A la colonne %d, il ne peut y avoir qu'un 1 entre les deux 0 \n", &j);
    }
    else if( grille_jeu[i][j] == grille_jeu[i-2][j] == 1) {
        printf("A la colonne %d, il ne peut y avoir qu'un 0 entre les deux 1 \n", &j);
    }
    else if( grille_jeu[i][j] == grille_jeu[i+2][j] == 0) {
        printf("A la colonne %d, il ne peut y avoir qu'un 1 entre les deux 0 \n", &j);
    }
}


int verif_3_ligne(int taille, int grille_jeu[taille][taille],int i, int j){  //verifie qu'il n'y a pas 3 '0' ou '1' d'affilé sur une ligne
    if ( (grille_jeu[i][j] == grille_jeu[i+1][j] == grille_jeu[i+2][j]) || (grille_jeu[i][j] == grille_jeu[i+1][j] == grille_jeu[i-1][j]) || (grille_jeu[i][j] == grille_jeu[i-1][j] == grille_jeu[i-2][j]))
    {
        return 0;
    }
    return 1;
}

int verif_3_col(int taille, int grille_jeu[taille][taille], int i, int j){  //verifie qu'il n'y a pas 3 '0' ou '1' d'affilé sur une colonne
    if ( (grille_jeu[i][j] == grille_jeu[i][j+1] == grille_jeu[i][j+2]) || (grille_jeu[i][j] == grille_jeu[i][j+1] == grille_jeu[i][j-1]) || (grille_jeu[i][j] == grille_jeu[i][j-1] == grille_jeu[i][j-2]))
    {
        return 0;
    }
    return 1;
}

int somme_col_jouee(int taille, int i, int grille[taille][taille]){ //verifie que pas plus de 2 ou 4 1 (respectivement 0) sur ligne
    int somme = 0;
    for (int j=0; j<taille; j++) {
        somme = somme + grille[i][j];
    }
    return somme;
}


int somme_ligne_jouee(int taille, int j, int grille[taille][taille]){ //verifie que pas plus de 2 ou 4 1 (respectivement 0) sur ligne
    int somme = 0;
    for (int i=0; i<taille; i++) {
        somme = somme + grille[i][j];
    }
    return somme;
}


int verif_col_diff(int taille, int grille[taille][taille], ){
    for ()
}

int verif_ligne_diff(){
    
}

int verif_coup_valid(int taille, int grille[taille][taille], int i, int j){
    if( verif_3_ligne(taille, grille, i, j) && verif_3_col(taille, grille, i, j) &&  )
}

int verif_coup_correct(int taille, int grille_jeu[taille][taille], int grille_solution[taille][taille], int i, int j){
    if (grille_solution[i][j] == grille_jeu[i][j]) {
        printf("Coup correct !");
        return 1;
    }
    return 0;
}