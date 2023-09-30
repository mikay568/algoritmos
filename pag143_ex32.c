#include<stdio.h>
#include<math.h>
void main()
{
    float M,A,IMC;
    printf("escreva sua massa e sua altura:\n");
    scanf("%f %f",&M,&A);
    IMC=M/pow(A,2)*10000;
    printf("%.2f \n",IMC);
    if((18.5<=IMC)&&(IMC<25))
    {
    printf("situacao:normal\n");
    }
    else if((25<=IMC)&&(IMC<30))
    {
    printf("situacao:sobrepeso\n");
    }
    else if((30<=IMC)&&(IMC<35))
    {
    printf("situacao:obesidade grau 1\n");
    }
    else if((35<=IMC&&IMC<40))
    {
    printf("situacao:obesidade grau 2\n");
    }
}
