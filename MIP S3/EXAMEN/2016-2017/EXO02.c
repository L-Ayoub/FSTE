
// ************************EXERCICE 2 *****************************************
int suiteDeZero(int V[], int n){
	/* cette fonction retourne le debut  de la plus long suite des zero dans V, -1 s'il n'y a pas des zeros */
	int debut = -1;
  int longg = 0;
  int cpt,i, j;
	
  for (i = 0; i < n; ++i)
	{
		if (V[i] == 0)
		{   
			cpt = 1;
			for (j = i+1; (j < n && V[j] == 0) ; ++j)
			{
				cpt++;
			}
			if(cpt > longg) {
				longg = cpt;
				debut = i; 
			}
		}
	}
return debut;
}
