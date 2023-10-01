#include<stdio.h>

int main()
{
    int N1,N2,R;
    printf("escreva dois numeros para saber se suas somas sao unidade, dezena ou centena:");
    scanf("%i %i",&N1,&N2);
    R=N1+N2;
    if((0<R)&&(R<9))
    {
       printf("resultado:unidade\n",R);
     }
    if((9<=R)&&(R<100))
    {
       printf("resultado:dezena\n",R);
     }
    if((100<=R)&&(R<=999))
    {
       printf("resultado:centena\n",R);
     }
}
