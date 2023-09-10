#include<stdio.h>
float main()
{
float A, B, C, D, SAB, SAC, SAD, SBD, SBC, SCD, PAB, PAC, PAD, PBC, PBD, PCD;
printf("escreva A:");
scanf("%f" ,&A);
printf("escreva B:");
scanf("%f", &B);
printf("escreva C:");
scanf("%f", &C);
printf("escreva D:");
scanf("%f", &D);
SAB = A + B;
SAC = A + C;
SAD = A + D;
SBC = B + C;
SBD = B + D;
SCD = C + D;

PAB = A * B;
PAC = A * C;
PAD = A * D;
PBC = B * C;
PBD = B * D;
PCD = C * D;

printf("\nSoma de A e B: %.2f ", SAB);
printf("\nSoma de A e C: %.2f ", SAC);
printf("\nSoma de A e D: %.2f ", SAD);
printf("\nSoma de B e C: %.2f ", SBC);
printf("\nSoma de B e D: %.2f ", SBD);
printf("\nSoma de C e D: %.2f ", SCD);
printf("\nProduto de A e B: %.2f ", PAB);
printf("\nProduto de A e C: %.2f ", PAC);
printf("\nProduto de A e D: %.2f ", PAD);
printf("\nProduto de B e C: %.2f ", PBC);
printf("\nProduto de B e D: %.2f ", PBD);
printf("\nproduto de C e D: %.2f ", PCD);
}