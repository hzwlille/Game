


//La fonction pour donner l'étape suivante automatiquement
int autoplayer(int* old_tas){

	int result=one_solution(old_tas);
	if(result=0){
		if(old_tas[0]!=0) {
			old_tas[0]=old_tas[0]-1;
			return 2;
		}
		if(old_tas[1]!=0) {
			old_tas[1]=old_tas[1]-1;
			return 2;
		}
		if(old_tas[2]!=0) {
			old_tas[2]=old_tas[2]-1;
			return 2;
		}

	}
	return 1;
}



//Trouver solution pour une itération
int one_solution(int* tas){
	int x, y, z;
	x=tas[0];
	y=tas[1];
	z=tas[2];
	for(int i=0;i<=x;i++){
		if(test_gager(x-i,y,z)==1){
			tas[0]=tas[0]-i;
			return 1;
		}
	}
	for(int j=0;j<=y;j++){
		if(test_gager(x,y-j,z)==1){
			tas[1]=tas[1]-j;
			return 1;
		}
	}
	for(int k=0;k<=z;k++){
		if(test_gager(x,y,z-k)==1){
			tas[2]=tas[2]-k;
			return 1;
		}
	}
/*
	itr=itr-1;
	if(itr>0){
one_solution(,itr);
}
	else{
		return itr;			
}*/

}



//Tester pour cette situation si on gagne
int test_gager(int x, int y, int z){

			int tas[3];
			tas[0]=x;
			tas[1]=y;
			tas[2]=z;

	trier_ascendant(tas);

	if(tas[0]==3&&tas[1]==2&&tas[2]==1) return 1;

	if(tas[0]==1&&tas[1]==1&&tas[2]==1) return 1;

	if(tas[0]==tas[1]&&tas[2]==0) return 1;

	return 0;
}

//Fonction pour changer l'ordre des tas
void trier_ascendant(int* tas){
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
