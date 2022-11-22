#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "fonction.h"

void CacherMotMystere (char MotMystere[],char Cacher[]) // fonction pour afficher _ _ _ _ au lieu du mot mystere
{

    int i = 0;
    do
    {
        Cacher[i]='_';
        printf("%c ",Cacher[i]);
        i++;
    }
    while (MotMystere[i]!='\0');
}


bool EstDans(char lettre,char MotMystere[]) // fonction pour savoir si la lettre est dans le mot
{
    int i=0;
    do
    {
        if(lettre==MotMystere[i])
        {
            return true;
        }

        i++;
    }
    while (MotMystere[i]!='\0');
}


void Reveler (char MotMystere[],char Cacher[],char test)
{
    int i=0;
    do
    {
        if(test==MotMystere[i])
        {
            Cacher[i]=test;
        }
        i++;
    }
    while (MotMystere[i]!='\0');
}


void AfficherNew (char Cacher[],char MotMystere[])// fonction qui affiche _ _ j _ _
{
    int i=0;
    do
    {
        printf("%c ",Cacher[i]);
        i++;
    }
    while (MotMystere[i]!='\0');
}



void MauvaisUpd (char Mauvais[],char test)//fonction pour update la liste de lettre fausses
{
    int i=0;
    while (Mauvais[i]!='\0')
    {
        if(test==Mauvais[i])
        {
            return;
        }

        i++;
    }
    Mauvais[i]=test;
    Mauvais[i+1]='\0';

}


bool Win(char Cacher[])//pour savoir si gagner ou pas
{
    int i=0;
    do
    {
        if(Cacher[i]=='_')
        {
            return true;
        }

        i++;
    }
    while (Cacher[i]!='\0');
}


void Pendu(int vie)//dessin pendu qui varie selon les pv restants
{
    if(vie==8)
    {
        printf("\n");
        printf("\n");
        printf("Il reste %d vies",vie);
    }
    if(vie==7)
    {
        printf("\n");
        printf("\n");
        printf("Il reste %d vies",vie);
        printf("\n");
        printf("\n");
        printf("|_\\___________");
    }
    if(vie==6)
    {
        printf("\n");
        printf("\n");
        printf("Il reste %d vies",vie);
        printf("\n");
        printf("\n");
        printf("|\\ ");
        printf("\n");
        printf("|_\\___________");
    }
    if(vie==5)
    {
        printf("\n");
        printf("\n");
        printf("Il reste %d vies",vie);
        printf("\n");
        printf("\n");
        printf("|     / \\ ");
        printf("\n");
        printf("|\\ ");
        printf("\n");
        printf("|_\\___________");
    }
    if(vie==4)
    {
        printf("\n");
        printf("\n");
        printf("Il reste %d vies",vie);
        printf("\n");
        printf("\n");
        printf("|      ^");
        printf("\n");
        printf("|     / \\ ");
        printf("\n");
        printf("|\\ ");
        printf("\n");
        printf("|_\\___________");
    }
    if(vie==3)
    {
        printf("\n");
        printf("\n");
        printf("Il reste %d vies",vie);
        printf("\n");
        printf("\n");
        printf("|/     O");
        printf("\n");
        printf("|     /|\\");
        printf("\n");
        printf("|      ^");
        printf("\n");
        printf("|     / \\ ");
        printf("\n");
        printf("|\\ ");
        printf("\n");
        printf("|_\\___________");
    }
    if(vie==2)
    {
        printf("\n");
        printf("\n");
        printf("Il reste %d vies",vie);
        printf("\n");
        printf("\n");
        printf("| /    |");
        printf("\n");
        printf("|/     O");
        printf("\n");
        printf("|     /|\\");
        printf("\n");
        printf("|      ^");
        printf("\n");
        printf("|     / \\ ");
        printf("\n");
        printf("|\\ ");
        printf("\n");
        printf("|_\\___________");
    }
    if(vie==1)
    {
        printf("\n");
        printf("\n");
        printf("Il reste %d vies",vie);
        printf("\n");
        printf("\n");
        printf("|  /   |");
        printf("\n");
        printf("| /    |");
        printf("\n");
        printf("|/     O");
        printf("\n");
        printf("|     /|\\");
        printf("\n");
        printf("|      ^");
        printf("\n");
        printf("|     / \\ ");
        printf("\n");
        printf("|\\ ");
        printf("\n");
        printf("|_\\___________");
    }
    if(vie==0)
    {
        printf("\n");
        printf("\n");
        printf("Il reste %d vies",vie);
        printf("\n");
        printf("\n");
        printf("______________");
        printf("\n");
        printf("|  /   |");
        printf("\n");
        printf("| /    |");
        printf("\n");
        printf("|/     O");
        printf("\n");
        printf("|     /|\\");
        printf("\n");
        printf("|      ^");
        printf("\n");
        printf("|     / \\ ");
        printf("\n");
        printf("|\\ ");
        printf("\n");
        printf("|_\\___________");
        printf("\n\nDernière Tentative de Deviner le Mot");
    }
}


