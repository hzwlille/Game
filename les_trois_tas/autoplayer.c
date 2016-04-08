
//La fonction pour donner l'étape suivante automatiquement
int* autoplayer(int* old_tas){


	
	








}


//Tester pour cette situation si on gagne
int test_gager(int * tas){
	
	trier_ascendant(tas);

}

//Fonction pour changer l'ordre des tas
int* trier_ascendant(int* tas){
	int a;
	if(tas[0]<tas[1]){
		a=tas[1];		
		tas[1]=tas[0];
		tas[0]=a;
	}
	if(tas[1]<tas[2]){
		a=tas[2];		
		tas[2]=tas[1];
		tas[1]=a;
	}
	if(tas[0]<tas[1]){
		a=tas[1];		
		tas[1]=tas[0];
		tas[0]=a;
	}
}
