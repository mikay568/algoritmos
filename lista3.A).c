#include<stdio.h>
int main()
{int X,Q;
scanf("%i",&X);
do{
X=X+1;
Q=X*X;
printf("%i*%i=%i\n",X,X,Q);
}while(X<=199);
}
