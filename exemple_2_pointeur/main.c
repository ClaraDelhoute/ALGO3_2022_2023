#include <stdio.h>
#include <stdlib.h>

void increment(int input)
{
    printf("inside increment input value %d\n",input);
    printf("addresse of input %d\n",&input);
    input++;
    printf("inside increment input value after %d\n",input);
}
int main()
{
    int compteur=0;
    compteur++;
    printf("Compteur before increment %d\n",compteur);
    increment(compteur);
    printf("Compteur after increment %d\n",compteur);
    printf("adress compteur %d\n",&compteur);
}
