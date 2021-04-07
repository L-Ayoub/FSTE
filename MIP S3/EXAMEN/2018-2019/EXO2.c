
 int i, j;
 int p, q;

// question a 
void Allouer_Image(unsigned char ***img, int *l, int *c)
{
    printf("Donner les dimensions L et C : ");
    scanf("%d%d",l,c);
    *img=((unsigned char)**)malloc((*l)*sizeof((unsigned char)*));
    for(i=0; i<*l; i++)
    {
        (*img)[i]=((unsigned char)*)malloc((*c)*sizeof(unsigned char));
    }
}

//question b

int* Histo_Image(unsigned char **img, int l, int c)
{
    int *T=(int*)malloc(256*sizeof(int));
    for(i=0; i<l; i++)
    {
        T[i]=0;
    }

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            T[img[i][j]]++;
        }
    }

    return T;
}

// Question c
unsigned char** erode_image(unsigned char **img, int l, int c)
{
    unsigned char min;
    unsigned char **ErMage=((unsigned char)**)malloc((l-2)*sizeof((unsigned char)*));
    ErMage[0]=(unsigned char*)malloc((l*c-l*2-c*2+4)*sizeof(unsigned char));
    for(i=0; i<(l-2); i++)
    {
        ErMage[i]=&ErMage[0][(c-2)*i];
    }

    for(i=1; i<l-1; i++)
    {
        for(j=1; j<c-1; j++)
        {
            min=img[i-1][j-1];
            for(p=-1; p<=1; p++)
            {
                for(q=-1; q<=1; q++)
                {
                    if(p!=i || q!=j) // juste les voisinages
                        if(min>img[i+p][j+q])
                            min=img[i+p][j+q];
                }
            }
            ErMage[i-1][j-1]=min;
        }
    }

    return ErMage;
}
