#include<stdio.h>
int main()
{
    int a,b,c=1,d;
    printf("escreva a base: ");
    scanf("%i",&a);
    printf("escreva o expoente: ");
    scanf("%i",&b);
    if(a>=0 && b>=0)
    {
        for(d=1;d<=b;d++)
        {
            c = c*a;
        }
        printf("%i elevado a %i e %i",a,b,c);
    }
}
