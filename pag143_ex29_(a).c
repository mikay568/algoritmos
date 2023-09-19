#include<stdio.h>

int main()
{
    int I;
    printf("escreva sua idade\n");
    scanf("%i",&I);
    if(I >= 18)
    {
        printf("usuario maior de idade");
    }
    if (I < 18){
        printf("usuario menor de idade");
    }
}
