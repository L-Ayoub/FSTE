
// 1)-

void Imprime(int grille[][MAX], int n){
    printf("\n *****************************imprime**************************\n");
	int i, j;
    for(i = 0; i < n; i++)
     {
     	for ( j = 0; j < n; ++j)
     	{
        	printf("%d ", grille[i][j]);
     	}
     	printf("\n");
	 }
	 printf("\n********************************FIN*****************************\n");
}

// 2)-
int nbVoisins(int grille[][MAX], int i, int j){ // vous pouvez toujour donnez n'import quel nom pour les args d'une fonction 
	int nb;
	nb = grille[i-1][j]+ grille[i+1][j] + grille[i][j-1] + grille[i][j+1];
return nb;
}

/* Ce fonction n'est pas partir à l'exam mais on doit l'utilise */
int Rand(){
	return rand()%2; //  retourne 0 ou 1 aleatoire
}

// 3)-

void configInit(int grille[][MAX], int n){
    printf("\n***************************configInit******************************\n");
	int i, j;
    for(i = 0; i <= n+1; i++)
     {
     	for ( j = 0; j <= n+1; ++j)
     	{
        	if( i == 0 || j == 0 || i == n+1 || j == n+1)
            grille[i][j] = 0; // valeurs ajoutées au bord
        	else 
            grille[i][j] = Rand(); 
     	}
	 }
  
	 printf("\n********************************FIN*******************************\n");
}

// 4)-
int estVivant(int grille[][MAX], int i, int j){
    int voisin;
    voisun = nbVoisins(grille, i, j); // apelle a nbVoisins en donne la grille et i et j comme des args
    if(voisin == 0 || voisin == 4)
      return 0; //test 
    if(voisin == 2 || voisin == 3)
      return 1;
    return grille[i][j];
}


// 5)-
void changeEtat(int grille[][MAX], int n){
    printf("\n*****************************Change l'Etat*****************************\n");
    int i, j;
    for(i = 1; i <= n ; i++){
        for(j = 1; j <= n ; j++){
            grille[i][j] = estVivant(grille, i, j);
        }
    }
    printf("Successfully.\n");
  
	 printf("\n********************************FIN*******************************\n");
}
