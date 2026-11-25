#include <stdio.h>
#include <stdlib.h>

#define PREMIERE_ANNEE 2005
#define DERNIERE_ANNEE 2024
#define NB_ANNEE 20
typedef struct{
int gravite [4];
int nb_accidents;
int nb_ids;
int *ids;         // id de l'accident 
int capacite;
}Annee;

void initialiser(Annee annees[]){
  for (int i = 0; i < NB_ANNEE;i++){
    for(int j= 0; j< 4 ; g++){
    annees[i].gravite[g]=0;
    }
    annees[i].nb_gravite=0;
    annees[i].ids=NULL;
    annees[i].nb_ibs=0;
    annees[i].capacite=0;

  }
}


