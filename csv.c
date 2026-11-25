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

//
FILE *ouvrir_csv(const char *nom_fichier){
    
    FILE *fichier = fopen(nomfichier, "r");
    char entete[200];

    if(fichier == NULL){
        fprintf(stderr,"Erreur : impossible d'ouvrir le fichier de données");
        exit(1);
    }
    if(fgets(entete, sizeof(entete), fichier) == NULL){                  //verifie que le fichier contient au moin un caractère car si la première ligne est vide on a "/n" 
        fprintf(stderr,"Erreur : le fichier de données est vide");       //permet egalement de sauter la première ligne.
        exit(1);
    }
    return fichier;
}

int lire_ligne(FILE* fichier, LigneCsv *ligne){
    char texte[200];
    int lus;

    do{
        if (fgets(texte, sizeof(texte), fichier) == NULL){     //verifie si il y'a encore des choses à lire dans le fichier, si la ligne est complètement vide fget(...) == NULL (ie) le reste du fichier est vide 
            return 0;  
        }
    }while (texte[0] == '/n' || texte[0] == '\r'); //tant que la ligne lu est vide (ne contient que \n pour linux ou \r pou widows) on lit la ligne suivante et on verfie que le reste du fichier n'est pas vide 

    ligne->numero++;
    
    lus = sscanf(texte, "%d;%d;%7[^;];%d;%d;%d;%d;%d;%d",
                 &ligne->annee, &ligne->id_accident, ligne->id_vehicule,
                 &ligne->place, &ligne->type_usager, &ligne->gravite,
                 &ligne->genre, &ligne->annee_naissance, &ligne->trajet); //lis dans la variable texte qui contient la ligne qui vient juste d'être lus.

    















