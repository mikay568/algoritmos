#include<stdio.h>
int main()
{
    int num1, num2, q;
    q=0;
    printf("escreva o dividendo: ");
    scanf("%i", &num1);
    printf("escreva o divisor: ");
    scanf("%i", &num2);
    while(num1>=num2)
    {
        num1 =num1-num2;
        q= q+1;
    }
    printf("o quociente da divisao e: %i",q);
}
