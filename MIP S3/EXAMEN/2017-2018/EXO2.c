#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//QUESTION 1
typedef struct{
    char balise[100][20]; 
    int n; /// nombre de balises HTML
}Html;


// QUESTION 2
void Add(Html *code, char balise[]){
    if(code->n < 100){  // 100 signfie le max de tableau balise
        strcpy(code->balise[code->n], balise); 
        (code->n)++;
    }else{
        printf("tableau de balises est plein!\n");
    }
}

// QUESTION 3
/// html body p s  |  s p body html
///   0   1   2 3  |  4 5 6    7
int AnalyseHtml(Html *code){
    int test = 1; // fixé comme vrai
    int i;
    for(i = 0; i < code->n; i++){
        //pour vérifier si l'ordre des balises a été respecté 
        if(strcmp(code->balise[i], code->balise[code->n -i-1]) != 0){
            test = 0; //  affecter faux 
            break; // sortie
        }
    }
return test;
}


// Fonction Bonus  pour affiche le code HTML 
void AfficheHtml(Html *code){
    int i;
    for(i = 0; i < code->n; i++){
        
        if((i+1) <= code->n/2){
            int j;
            for(j = 0; j < i; j++){
                printf("\t");
            }
            printf("<%s>\n", code->balise[i]); // < nome de balise  > exemple <html>
        }else{
            int j;
            for(j = i; j < code->n-1; j++){
                printf("\t",code->n);
            }
            printf("</%s>\n", code->balise[i]);
        }
    }
}
