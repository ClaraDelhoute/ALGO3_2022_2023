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

int max (int *n,int *m, int *z,int *maximun) //fonction max qui recherche le max entre 3 entiers
{
    printf("Les valeurs sont les suivantes n=%d, m=%d, z=%d\n",*n,*m,*z);
    *maximun=0;
    if((*n < *z) && (* m< *z ))
    {
        *maximun=*z;
    }
    else
    {
        if((*n>*m) && (*n>*z))
        {
            *maximun=*n;
        }
        else
        {
                if(*m>*n && *m>*z )
                {
                    *maximun=*m;
                }
                else{
                    *maximun=*n;
                }
        }
    }

    return *maximun;
}

int min (int *n,int *m, int *z,int *minimun)  //fonction qui retourne le min entre 3 entiers
{
    *minimun=0;
    if((*n < *z) && (* n< *m ))
    {
        *minimun=*n;
    }
    else
    {
        if((*n>*m) && (*m<*z))
        {
        *minimun= *m;
        }
        else
        {
                        if((*n>*m && *m<z && *n>*z) || ((*n>m && *m<z && *n<*z)))
                        {
                    *minimun=*m;
                }

                else {
                        if(*n>*z && *m>*z)
                    *minimun=*z;
                }}}

    return *minimun;
}

void max_et_min(int *maximun,int *minimun)  //procedure que permet d'écrire le max et le min grâce aux fonctions max etmin
{
    printf("le max est : %d et le min est %d\n",&maximun,&minimun);
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
    int maximun,minimun;
    scanf("%d %d %d",&x,&y,&z);
    max_et_min(max(&x,&y,&z,&maximun),min(&x,&y,&z,&minimun));
}
