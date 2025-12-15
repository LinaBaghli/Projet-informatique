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
    printf("Le but du jeu est d'éliminer le plus d'items possible lors d'un niveau. Il y a 3 niveaux par partie, pour chaque niveau, l'utilisateur doit répondre à un contrat : \n");
    printf("Contrat 1 (niveau1) : 15 X 20 @, 30 coups possibles en 2 min\n");
    printf("Contrat 2 (niveau2) : 30 X 15 O 20 % 20 &, 40 coups possibles en 1min 45");
    printf("Contrat 3 (niveau3) : 40 X 20 O 25 % 25 @ 20 &, 40 coups possibles en 1min30");
    printf("Chaque niveau peut être sauvegardé avec un pseudo utilisateur, afin d'y retourner plus tard.\n");
    printf("A vous de jouer !\n");
}

void afficherGrille (int largeur, int hauteur){

}




