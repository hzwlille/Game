
#include <stdio.h>
#include "autoplayer.h"
//Déclaration des fonctions


void printtas(int , int , int );
int player_program(int*, int*,int*,  int, int);

//Déclaration des proccessus
play_people(void);


void main (void)
{

	printf("Bienvenu au jeu des trois tas !\n");
	printf("Ci d'après les trois tas initiaux:\n");
	int x=3,y=5,z=7;
	printtas(x,y,z);
	int fin=1;
	int tas;
	int number;
	int mode;
	int autotas[3];
	
	int player;

	printf("Veuillez choisir le mode: \n 1: Jouer en local avec entre humain \n 2: Jouer avec l'ordinateur \n 3: Jouer à en ligne\n");


	scanf("%d",&mode);

	switch(mode){
		case 1: 
			printf("1"); 
			break;
		case 2:
			printf("2"); 
			break;
		case 3: 
			printf("3"); 
			break;
	}


	while(fin==1){
		printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
		player=1;
		fin=player_program(&x,&y,&z,  number, player);
		if(fin==0) break;
		//player=2;
		//fin=player_program(&x,&y,&z,  number, player);
		autotas[0]=x; autotas[1]=y; autotas[2]=z;
		autoplayer(autotas);
		x=autotas[0]; y=autotas[1]; z=autotas[2];
		printtas(x,y,z);
		if(x+y+z==1){
			fin=0;
			player=2;
		}

	}







	printf ("Le joueur %d a gagné, merci d'avoir joué à ce jeux\n\n",player);

}

void printtas(int x, int y, int z){
	printf("Le tas actuel:\n1: ");
	for(int i=0;i<x;i++){
		printf("*");
	}
	printf("\n2: ");
	for(int i=0;i<y;i++){
		printf("*");
	}
	printf("\n3: ");
	for(int i=0;i<z;i++){
		printf("*");
	}
	printf("\n\n");
}

int player_program(int* x, int* y,int* z,  int number,int num){

	int tas;
	int mytas[3];
	mytas[0]=*x;
	mytas[1]=*y;
	mytas[2]=*z;

	while(1){
		printf("\nJoueur %d,choisir le tas:\n",num);
		scanf("%d",&tas);
		if((tas!=1)&&(tas!=2)&&(tas!=3)){	
			printf("Choisir le tas de 1 à 3\n");			
		} 
		else{ 
			if(mytas[tas-1]==0){
				printf("Plus de jeton à prendre!\n");
			}
			else break;
		}
	}


	while(1){
		printf("Choisir le numbre:");
		scanf("%d",&number);
		if(number>mytas[tas-1]){
			printf("Ne prenez pas plus qu'il y a!\n");
		}
		else if((*x+*y+*z-number)<=0)
		{	
			printf("Tu va mourir comment ça!\n");
		}
		else break;
	}

	switch(tas){
		case 1: 
			*x=*x-number;
			break;
		case 2: 
			*y=*y-number;
			break;
		case 3: 
			*z=*z-number;
			break;
	}	

	printtas(*x,*y,*z);
	if((*x+*y+*z)==1){
		return 0;
	}
	return 1;

}
//Les processus du programe

//Jouer avec lui même
//play_people(void){
//	printf("Let's try%d", x);

//}


//Jouer avec l'ordinateur
//Jouer en ligne


