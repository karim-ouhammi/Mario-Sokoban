/*
constantes.h
------------

Par OUHAMMI Karim

R�le: d�finition des constantes pour tout le programme
*/

#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES

    #define TAILLE_BLOC          34
    #define NB_BLOCS_LARGEUR     12
    #define NB_BLOCS_HAUTEUR     12
    #define LARGEUR_FENETRE      TAILLE_BLOC * NB_BLOCS_LARGEUR
    #define HAUTEUR_FENETRE      100 + TAILLE_BLOC * NB_BLOCS_HAUTEUR

    enum {HAUT, BAS, GAUCHE, DROITE};
    enum {VIDE, MUR, CAISSE, OBJECTIF, MARIO, CAISSE_OK};

#endif // DEF_CONSTANTES
