#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int fois();
int multiplication();
int soustraction();
int division();

int main(int argc, char *argv[])
{
    int choix = 0;
    printf("\nVeuillez choisir un mod...\n");
    printf("1 Fois\n");
    printf("2 Divison\n");
    printf("3 Multiplication\n");
    printf("4 Soustraction\n");
    scanf("%d", &choix);

    switch (choix) {
    case 1:
    fois();
    break;
    case 2:
    division();
    break;
    case 3:
    multiplication();
    break;
    case 4:
    soustraction();
    break;
    }
    return 0;
}

int fois() {
    // Déclaration des variables
    int resultat = 0;
    int calcul1 = 0;
    int calcul2 = 0;
    int resultatuser = 0;
    char *nom;
    nom = malloc(100);
	memset(&nom, 0x0, 99*sizeof(char));


    printf("-- Bienvenue sur le MEGA CALCULEUR ! --\n");

    printf("\nVeuillez ecrire votre nom...\n");
    scanf("%100s", &nom);

 // Fonction pour demandée a l'utilisateur d'entrée 2 chiffre
    printf("\n-- Entrez un Chiffre ! --\n");
    scanf("%d", &calcul1);
    printf("\n-- Entrez un autre Chiffre ! --\n");
    scanf("%d", &calcul2);

    printf("\nCombien fait : %d * %d = ? \n", calcul1, calcul2);
    scanf("%d", &resultatuser);

    // Calcule des 2 Chiffre
    resultat = calcul1 * calcul2;

    // Condition si c'est juste ou nond
    if (resultat == resultatuser) {
        printf("%s Bien Jouez tu a trouvee cetait bien %d !\n", &nom, resultatuser);
    }
    else if(resultatuser != resultat){
        printf("%s Tu a perdu, tu a trouvee %d, alors que cetait %d\n", &nom, resultatuser, resultat);
    }
	getch();
	return 0;
}

int division() {
    // Déclaration des variables
    int resultat = 0;
    int calcul1 = 0;
    int calcul2 = 0;
    int resultatuser = 0;
    char *nom;
    nom = malloc(100);
	memset(nom, 0x0, 100*sizeof(char));


    printf("-- Bienvenue sur le MEGA CALCULEUR ! --\n");

    printf("\nVeuillez ecrire votre nom...\n");
    scanf("%s", &nom);

 // Fonction pour demandée a l'utilisateur d'entrée 2 chiffre
    printf("\n-- Entrez un Chiffre ! --\n");
    scanf("%d", &calcul1);
    printf("\n-- Entrez un autre Chiffre ! --\n");
    scanf("%d", &calcul2);

    printf("\nCombien fait : %d / %d = ? \n", calcul1, calcul2);
    scanf("%d", &resultatuser);

    // Calcule des 2 Chiffre
    resultat = calcul1 / calcul2;

    // Condition si c'est juste ou nond
    if (resultat == resultatuser) {
        printf("%s Bien Jouez tu a trouvee cetait bien %d !\n", &nom, resultatuser);
    }
    else if(resultatuser != resultat){
        printf("%s Tu a perdu, tu a trouvee %d, alors que cetait %d\n", &nom, resultatuser, resultat);
    }
	getch();
	return 0;
}

int multiplication() {
    // Déclaration des variables
    int resultat = 0;
    int calcul1 = 0;
    int calcul2 = 0;
    int resultatuser = 0;
    char *nom;
    nom = malloc(100);
	memset(nom, 0x0, 100*sizeof(char));

    printf("-- Bienvenue sur le MEGA CALCULEUR ! --\n");

    printf("\nVeuillez ecrire votre nom...\n");
    scanf("%s", &nom);

 // Fonction pour demandée a l'utilisateur d'entrée 2 chiffre
    printf("\n-- Entrez un Chiffre ! --\n");
    scanf("%d", &calcul1);
    printf("\n-- Entrez un autre Chiffre ! --\n");
    scanf("%d", &calcul2);

    printf("\nCombien fait : %d + %d = ? \n", calcul1, calcul2);
    scanf("%d", &resultatuser);

    // Calcule des 2 Chiffre
    resultat = calcul1 + calcul2;

    // Condition si c'est juste ou nond
    if (resultat == resultatuser) {
        printf("%s Bien Jouez tu a trouvee cetait bien %d !\n", &nom, resultatuser);
    }
    else if(resultatuser != resultat){
        printf("%s Tu a perdu, tu a trouvee %d, alors que cetait %d\n", &nom, resultatuser, resultat);
    }
	getch();
	return 0;
}

int soustraction() {
    // Déclaration des variables
    int resultat = 0;
    int calcul1 = 0;
    int calcul2 = 0;
    int resultatuser = 0;
    char *nom;
    nom = malloc(100);
	memset(nom, 0x0, 100*sizeof(char));

    printf("-- Bienvenue sur le MEGA CALCULEUR ! --\n");

    printf("\nVeuillez ecrire votre nom...\n");
    scanf("%s", &nom);

 // Fonction pour demandée a l'utilisateur d'entrée 2 chiffre
    printf("\n-- Entrez un Chiffre ! --\n");
    scanf("%d", &calcul1);
    printf("\n-- Entrez un autre Chiffre ! --\n");
    scanf("%d", &calcul2);

    printf("\nCombien fait : %d - %d = ? \n", calcul1, calcul2);
    scanf("%d", &resultatuser);

    // Calcule des 2 Chiffre
    resultat = calcul1 - calcul2;

    // Condition si c'est juste ou nond
    if (resultat == resultatuser) {
        printf("%s Bien Jouez tu a trouvee cetait bien %d !\n", &nom, resultatuser);
    }
    else if(resultatuser != resultat){
        printf("%s Tu a perdu, tu a trouvee %d, alors que cetait %d\n", &nom, resultatuser, resultat);
    }
	getch();
	return 0;
}
