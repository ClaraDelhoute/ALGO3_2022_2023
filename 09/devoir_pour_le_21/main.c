#include <stdio.h>
#include <stdlib.h>

//devoir du 21/09 

void permute(int *a, int *b)  //fonction permute entre deux entiers
{
    printf("Les deux valeurs sont : a=%d et  b=%d\n",*a,*b);
    int tmp=*a;
    *a=*b;
    *b=tmp;
    printf("Les valeurs sont désormais a=%d et b=%d\n",*a,*b);
}

int max (int *n,int *m, int *z) //fonction max qui recherche le max entre 3 entiers
{
    printf("Les valeurs sont les suivantes n=%d, m=%d, z=%d\n",*n,*m,*z);
    int max=0;
    if((*n < *z) && (* m< *z ))
    {
        max=*z;
    }
    else
    {
        if((*n>*m) && (*n>*z))
        {
            max=*n;
        }
        else
        {
                if(*m>*n && *m>*z )
                {
                    max=*m;
                }
                else{
                    max=*n;
                }
        }
    }

    return max;
}

int min (int *n,int *m, int *z)  //fonction qui retourne le min entre 3 entiers
{
    int min=0;
    if((*n < *z) && (* n< *m ))
    {
        min=*n;
    }
    else
    {
        if((*n>*m) && (*m<*z))
        {
        min= *m;
        }
        else
        {
                        if((*n>*m && *m<z && *n>*z) || ((*n>m && *m<z && *n<*z)))
                        {
                    min=*m;
                }

                else {
                        if(*n>*z && *m>*z)
                    min=*z;
                }}}

    return min;
}
void max_et_min(max,min)  //procedure que permet d'écrire le max et le min grâce aux fonctions max etmin 
{
    printf("le max est : %d et le min est %d\n",max,min);
}



int main()
{
    int n; char c;
    printf("Inserer une valeur de n\n");
    scanf("%d",&n);
    printf("Le nombre insere est : %d\n",n);
    printf("L'adresse de n est : %d\n",&n);
    printf("Entrer une chaîne de caractere \n");
    scanf("%s",&c);
    printf("Le caractere insere est : %c\n",c);
    printf("L'adresse du caractere c est : %d\n",&c);
    int n1,n2;
    printf("Saisir deux valeurs:\n");
    scanf("%d%d",&n1,&n2);
    permute(&n1,&n2);
    printf("Entrer trois valeurs\n");
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    max_et_min(max(&x,&y,&z),min(&x,&y,&z));
}
