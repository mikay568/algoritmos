#include<stdio.h>

int main()
{
    int L1,L2,L3,L4;
scanf("%i %i %i %i",&L1,&L2,&L3,&L4);
if(L1!=L2!=L3!=L4){
    printf("resultado invalido");}
{if(L1==L2==L3==L4)
    printf("quadrado");}
{if(L1==L2!=L3!=L4)
    printf("retangulo");}
{if(L1!=L2==L3!=L4)
    printf("retangulo");}
{if(L1!=L2!=L3==L4);
    printf("retangulo");}
}
