#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define MAX 100
.
  .
  .
  .
  .
  // **********************************EXERCICE 3****************************
typedef struct reponse{
	char vraiOuFaux[2]; //  F : FAUX et V : VRAI
	int ligne;
	int colonne;
}Reponse;

Reponse verifieMatrice(char M[][MAX], int n){
	int i, j , k, idnentique;
	Reponse res = {"F", -1, -1}; // Faux par defaut
	/* pour chaque ligne on verifier s'il de colonne 
	  idnentique */
	for (i = 0; i < n; ++i) //fixe la ligne
	{

		for ( j = 0; j < n; ++j) //fixe la colonne
			{
				idnentique = 0;
				for ( k = 0; (k < n && M[i][k] == M[k][j]); ++k)
				{
					idnentique++;
				}
				// si on trouve le resultat
				if (idnentique == n)
				{
					strcpy(res.vraiOuFaux,"V"); // VRAI
					res.ligne = i;
					res.colonne = j;
				}
			}

	}
return res;
}
