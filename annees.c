#include <stdio.h>
#include <stdlib.h>

#define PREMIERE_ANNEE 2005
#define DERNIERE_ANNEE 2024
#define NB_ANNEE 20
typedef struct{
int gravite [4];
int nb_accidents;
int nb_ids;        //nb de id dans le tableau
int *ids;         // id de l'accident 
int capacite;      // taille du tableau alloué
}Annee;

void initialiser_annees(Annee annees[]){
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

void ajouter_id(Annee *annee,int id){
  if (annee->nb_ids == annee->capacite){
    if (annee->capacite = 0){
    annee->capacite = 100;
  }
    else{
  annee->capacite =annee->capacite *2;

    }
annee->ids = realloc(annee->ids,annee->capacite * sizeof(int));

}
annee->ids[annee->nb_ids]= id;    //
annee->nb_ids++;                   //permet de preparer annee->ids = id suivant
}

void tri_rapide(int tableau[],int debut,int fin)){
  if (debut>=fin){
  return;
  }
int pivot=tableau[(debut +fin)/2];
int i =debut;
int j =fin ;
int temp;
while(i<=j){
  while(tableau[i]<pivot){
  i++;
  }
  while(tableau[j]>pivot){
  j--;
  }
  if (i<=j){
  tmp=tableau[i];
  tableau[i]=tableau[j];
tableau[i]= tmp;
  i++;
  j++;
  }
}
tri_rapide(tableau,debut,j); //on fait le tri sur la partie gauche
tri_rapide(tableau,i,fin);    //on fait le tri sur la partie droite
}

void






