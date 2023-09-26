#include<stdio.h>
#include<math.h>
void main()
{
    float M,A,IMC;
    scanf("%f %f",&M,&A);
    IMC=M/pow(A,2);
    printf("%f \n",IMC);
    if(18.5<=IMC<25)
    {
    printf("situacao:normal\n");
    }
    else if(25<=IMC<30)
    {
    printf("situacao:sobrepeso\n");
    }
    else if(30<=IMC<35)
    {
    printf("situacao:obesidade grau 1\n");
    }
    else if(35<=IMC<40)
    {
    printf("situacao:obesidade grau 2\n");
    }
}
