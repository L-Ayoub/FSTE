// exercice 3 
//Question 2
char** newStringArray(int n){
    char** T = (char**)malloc(n*sizeof(char*)); // ALLOCATION DYNAMIQUE 
    int i;
    for(i = 0; i < n ; i++)
        T[i] = (char*)malloc(MAX*sizeof(char)); //ATTENTION AJOUT CETTE LIGNE APRES LES BIBLIO =====> #define MAX 100
return T;
}


// QUESTION 3
char** newCharMatrix(int size){
    char** M = (char**)malloc(size*sizeof(char*));   // CHAR ** est le type de retour
    int i;
    for(i = 0 ; i < size ; i++)
        M[i] = (char*)malloc(size*sizeof(char));
return M;
}

//Question 4
void printMatrix(char **mat, int size){
    int i, j;
  
printf("\n*************************printMatrix************************\n");
    for(i = 0; i < size ; i++){
        for(j = 0; j < size ; j++){
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
printf("\n******************************FIN****************************\n");
}

// QUESTION 5

typedef struct Indices{
	int f;
  int d;
  // les indices de collones, dans lequelle il apparait
}Indices;

Indices lineIndice(char **mat, int size, int line, char word[]){
    int i, j;
    int existe, debut, fin;
    Indices res = {-1, -1}; // Indices contient f et d           
  //     -1 signifie ERREUR
  
    for(i = 0; i < size ; i++){
        if(mat[line][i] == word[0]){
            existe = 1;
            debut = i;
            fin = i;
            for(j = 1; i+j < size && word[j] != '\0' && mat[line][i+j] == word[j] ; j++){
                existe++; 
                fin++;
            }
        }

        if(existe == strlen(word)){
            res.d = deb; // res.d que ona defini dans typedef struct Indices
            res.f = fin;
        }
    }
return res;
}
//QUSETION  6) fonction SOLV HHH


void solve(char **mat, int size, char **tab, int n){
    int i, j;
    int  L, C, word;
    char **Temp;
    Temp= newCharMatrix(size); 
   
  for(i = 0; i < size ; i++){
        for(j = 0; j < size ; j++){
            Temp[i][j] = mat[i][j];
        }
    }

    for(word = 0; word < nb ; word++){ /// FIXER UN "WORD"
        for(L = 0; L < size ; L++){
            Indices ind = lineIndice(word, size, L, tab[word]);
          
            if(ind.deb == -1 && ind.fin == -1) 
              continue; // arret ici mais refboucler
            else{
                    for(i = ind.deb; i <= ind.fin ; i++){
                         Temp[L][i] = '#';
                   }
    
                puts(tab[word]); // Afficher le mot rayer
            }
        }

    }

    printMatrix(matTemp, size); //print la matrice 
}

