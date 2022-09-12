#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 50

/**
le but de ce programme est de calculer le cumul des nombres entre la position n et m d'un tableau t
de trouver la position du maximun entre la position n et m du même tableau
la fonction remplissage_affichage me permet juste de déclarer les valeurs du tableau
chaque fonction possède deux entrées et une valeur de sortie
**/
typedef  int Tab[MAX]; //déclaration du tableau
int i; //variable global

void remplissage_affichage(int n,Tab t) //méthode pour remplier et afficher le tableau t de taille n
{
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d \n",t[i]);
    }

}

int addition_entre_n_et_m(int n,int m,Tab t) //calcul le cumul entre la position n et m du tableau t
{
    int calcul=0;
    for(i=n;i<=m;i++)
    {
    calcul=calcul+t[i];
}
return calcul;
}

int max_between_n_et_m(int n,int m,Tab t) //méthode pour trouver le maximun entre la position n et m du tableau t
{
    int max=0;
    for(i=n;i<m+1;i++)
    {
        if (max<t[i])
        {
            max=t[i];
        }
    }
    return max;
}



int main() //méthode main
{
    int n=15;
    int n1=2; int n2=9;
    int n3=4, n4=12;
    int y,z;
    int max1, max2;
    Tab t;
    remplissage_affichage(n,t);
    y=addition_entre_n_et_m(n1,n2,t);
    printf("Le cumul entre %d et %d est : %d \n", n1,n2,y);
    z=addition_entre_n_et_m(n3,n4,t);
    printf("Le cumul entre %d et %d est : %d \n", n3,n4,z);
    max1=max_between_n_et_m(n1,n3,t);
    printf("Le max entre %d et %d est : %d \n", n1,n3,max1);
    max2=max_between_n_et_m(n2,n4,t);
    printf("Le max entre %d et %d est : %d \n", n2,n4,max2);





}

