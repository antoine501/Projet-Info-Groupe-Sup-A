#include <stdio.h>
#include <stdlib.h>

//rappel !! une ligne = une victime.
typedef struct {
    int numero;
    int annee;
    int id_accident;
    int place;
    int type_usager;
    int gravite;
    int genre;
    int anne_naissance;
    int trajet;
    int age;
} LigneCsv;

FILE *ouvrir_csv(const char *nom_fichier){
    
    FILE *fichier = fopen(nomfichier, "r");
    char entete[200];

    if(fichier == NULL){
        fprintf(stderr,"Erreur : impossible d'ouvrir le fichier de données");
        exit(1);
    }
    if(fgets(entete, sizeof(entete), fichier) == NULL){
        fprintf(stderr,"Erreur : le fichier de données est vide");
        exit(1);
    }
    return fichier;
}

