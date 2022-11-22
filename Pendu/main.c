#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "fonction.h"

int main()
{
    char test;
    int vie=8;

    char Cacher[100];
    char MotMystere[100];
    char Mauvais[27];
    Mauvais[0]='\0';
    //choix mot mystere
    printf("Quel Mot Veux Tu Faire Deviner ? : ");
    scanf("%s",MotMystere);
    system("clear");


    //Afficher le mot _ _ _ _
    CacherMotMystere (MotMystere,Cacher);

    printf("\n");


    Pendu(vie);//affiche le nombre de vie

    printf("\n");

    //jeu

    while(vie>=0)//faire tant que testvie est en dessous ou égale à vie
    {
        if(Win(Cacher))//faire tant que Cacher contient '_'
        {
            scanf(" %c",&test);
            system("clear");

            Reveler (MotMystere,Cacher,test);


            //test si lettre dans mot
            if(EstDans(test,MotMystere))
            {
                //affiche update
                AfficherNew (Cacher,MotMystere);
                printf("\n");
                printf("\nLettre Fausse : %s ",Mauvais);
                Pendu(vie);
            }
            else
            {
                //update les mauvais et les affiches
                vie--;
                MauvaisUpd(Mauvais,test);
                AfficherNew (Cacher,MotMystere);
                printf("\n");
                printf("\nLettre Fausse : %s ",Mauvais);
                Pendu(vie);
            }
            printf("\n");
        }
        else//afficher win
        {
            system("clear");
            printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\t\t\t\tYOU WIN\n\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            return 0;
        }
    }

    //afficher perdu
    system("clear");
    printf("\t\t\t-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n\n\t\t\t\tGAME OVER\n\n\n\t\t\t-_-_-_-_-_-_-_-_-_-_-_-_-_-");



    return 0;
}
