//************************************EXERCICE 1 ***********************************
//QUESTION 1
void Delete(char* word, char c)
{
    for(i=0; i<strlen(word); i++)
    {
        if(word[i]==c)
        {
            for(j=i; j<strlen(word); j++)
            {
                word[j]=word[j+1];
            }
            i--;
        }
    }
}

// QUESTION 2
char* Start(char* CH1, int n)
{
    char *CH2=(char*)malloc((n+1)*sizeof(char)); // +1 pour la fin de chaine de caractere \0
    for(i=0; i<n; i++)
    {
        CH2[i]=CH1[i];
    }
    CH2[i]='\0'; // Lorsue on sort dans la boucle for i doit est egale (n-1)++ cad i = n  CH2[n]='\0';
    return CH2;
}

char* End(char* CH1, int n)
{
    char *CH2 =(char*)malloc((n+1)*sizeof(char));
    for(i=strlen(CH1)-n,j=0; j<n+1; i++,j++)
    {
        CH2[j]=CH1[i];
    }
    return CH2;
}
// QUESTION 3
char* Middle(char* CH1, int p, int q)
{
    char *CH2 = (char*)malloc((q-p+2)*sizeof(char));
    for(i=p; i<q+1 ; i++)
    {
        CH2[i-p]=CH1[i];
    }
    CH2[i]='\0';
    return CH2;
}
