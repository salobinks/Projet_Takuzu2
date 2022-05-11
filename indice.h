#ifndef PROJET_TAKUZU_INDICE_H
#define PROJET_TAKUZU_INDICE_H


int verif_ligne_valid();

int verif_col_valid(int grille_jeu);

int verif_coup_correct();

int somme_col_jouee(int taille, int i, int grille[taille][taille]);

int somme_ligne_jouee(int taille, int j, int grille[taille][taille]);




#endif //PROJET_TAKUZU_INDICE_H

