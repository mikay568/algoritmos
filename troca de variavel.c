#include<stdio.h>
void main()
{
int A, B, C;
printf("escreva A:");
scanf("%i" , &A);
printf("escreva B:");
scanf("%i", &B);
C = A;
A = B;
B = C;
printf("A: %i" ,A );
printf( " B: %i",B );
}