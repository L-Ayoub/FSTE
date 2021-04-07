/** EXERCICE 1*/

// QUESTION 1)
int* range(int T[], int n){
	// T est tableau de longueur n en paramètres
	  
	int *T1 ;
    T1 = (int*)malloc(n*sizeof(int)); // allocation dynamique
	int i, j;
	for ( i = 0; i < n; ++i) 
	{
		int cpt = 0; // compter combien de T[j] < T[i]
		for ( j = 0; j < n; ++j) 
		{
			if(t[j] < t[i]) cpt++;
		}
		T1[i] = cpt;
	}
   //retourne un tableau T1 tel que T1[i] compte le nombre de T[j] inférieur à T[i]!
return T1;
}

//QUESTION  2)
int* tri(int T1[], int T2[], int n){
	// Prend deux tableau T1 et T2 avec leur longueur n 
	   
	int *tab = (int*)malloc(n*sizeof(int));
	int i, pos;
	for (i = 0; i < n; ++i)
	{
		pos = T2[i]; // la position final de t[i] dans tt
		tab[pos] = T1[i];
	}
return tab; // retourne un tableau tab représentant la version triée de T1
}
