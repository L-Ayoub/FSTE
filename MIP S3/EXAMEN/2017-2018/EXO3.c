#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char** extraire(char text[]){
  int i, j, k;
	char **T = (char**)malloc(100*sizeof(char*)); // ALLOCATION DYNAMIQUE
	char word[50]; 

	
	for(i=0; i < strlen(text); i++){
		k = 0; // fixe k
		word[k] = text[i]; 
		i++;
    k++;
		while(text[i] != ' ' || text[i] != '\0'){
			word[k] = text[i]; 
			i++; 
      k++;
		}
		word[k] = '\0';
		T[j] = (char*)malloc(strlen(word)*sizeof(char)); 
		strcpy(T[j], word); // ajout le mot au tableau
		j++;
	}
	return T;
}



int* calcul(char **T, int n){
  int *po;
	int *occurence;
   occurence =(int*)calloc(26,sizeof(int)); // allocation dynamique mais cette fois avec calloc 
  // attention aucun diff entre calloc et malloc les deux pour allouer l'espace memoire
	char *pt;
  
      	
  for(pt=T[0]; pt<T[0]+n; pt++){ 
  	if((*pt<='z')&&(*pt>='a'))
         *(occurence+(*pt-'a')) += 1;
      if((*pt<='Z')&&(*pt>='A'))
         occurence[(*pt-'A')] += 1;
	}

  return occurence;
}

int main(){
  int *po;
	char text[] = "Brouilleur : est un dispositif de codage d'un sifnal pour proteger le contenu de la transmission";
	char **T = extraire(text); // appel au fonction extraire
  int n = 15; // nombre des mots de Tableau Text[]
	int *occurence = calcul(T, n);
  
  
	printf("Le Text conient:\n");
    for(po=occurence; po<occurence+14; po++) 
     if(*po != 0)
       printf("%d mots qui commence par la lettre \'%c\'\n",*po,'A'+(po-occurence));
}
