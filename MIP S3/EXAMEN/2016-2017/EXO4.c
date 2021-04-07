
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define MAX 100
.
  .
  .
  .
  //***********************************EXERCICE 4*******************************************
  
  //Q 1
float* ratio(int M[][MAX], int n){
	float *Res = (float*)malloc(n*sizeof(float));
	float sumI, sumJ;
	int i, j;
	// sumI : abonnements
	// sumJ : abonnes
	for (i = 0; i < n; ++i)
	{   sumI = 0; sumJ = 0; 
		for ( j = 0; j < n; ++j)
		{
			// Les abonnes de i
			if (M[i][j] == 1)
			{
				sumJ++;
			}
			// les abonnements de i
			if (M[j][i] == 1)
			{
				sumI++;
			}
		}

		Res[i] = sumI/sumJ;
	}

return Res;
}

// Question 2

void calculerNiveau(int a[][MAX], int n, int p){
	int i, j, k;
	for (i = 0; i < n; ++i)
	{   
		// cherche un abonnee
		for (j = 0; j < n; ++j)
		{   // une fois trouver! on va chercher ses abonnes
			if (a[i][j] == p)
			{ 
				for (k = 0; k < n; ++k)
				{
					if (a[j][k] == p)    
            a[i][k] = p+1;
					}
			}
		}
	}
}
