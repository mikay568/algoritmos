#include<stdio.h>
int main()
{
    int N,M,R;
    scanf("%i",&N);
    scanf("%i",&M);
    do{
        R=N*M;
        printf("%i*%i=%i\n",N,M,R);
        M=M+1;
    }while(M<=10);
}
