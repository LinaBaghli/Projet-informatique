#include <stdio.h>
#include <windows.h>
#include <conio.h>

void afficherNumeroNiveau(int niveau){ //afficher le numero du niveau (1 2 ou 3)
    printf("Niveau actuel : %d", niveau);
} 

void afficherNombredeVies(int *nb_vies_restantes){ //afficher le nombre de vies restantes du joueur à tout moment
    printf("Vies restantes : %d", *nb_vies_restantes);
}

void afficherTempsrestant(int tempsrestant){ //afficher le temps restant pour chaque niveau en seconde
    while(tempsrestant>=0){
        int minutes = tempsrestant / 60;
        int secondes = tempsrestant %60;
        system("cls");  //effacer l'ecran à chaque seconde
        printf("Temps restant : %02d:%02d\n", minutes, secondes); //affichage du temps restant avec deux chiffres pour minutes et secondes
        Sleep(1000); //attendre 1 sec
        tempsrestant--;
    }
    printf("\nLe temps est termine !\n");
}

void aficherRegles(){
    printf("======= Regles du jeu =======\n");
