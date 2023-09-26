#include<stdio.h>
#include<math.h>
void main()

{
    int A,B;
    scanf("%i", &A);
    B=(A%2);
    if(B==0)
    {
        printf("numero par");
    }
    if(B>0)
    {
         printf("numero impar");
    }

}
