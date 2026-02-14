#include<stdio.h>
#include<math.h>


int main()
{
    float P,T,R,CI, Amount;
    printf("enter the principal amount:");
    scanf("%f",&P);
    printf("enter time (in years):");
    scanf("%f",&T);
    printf("enter rate of interest:");
    scanf("%f",&R);
    Amount=P*pow((1+R/100),T);
    CI= Amount - P;
    printf("THE COMPOUND INTEREST IS=%.2f",CI);
    }