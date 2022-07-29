#include<stdio.h>
int main()
{
   float f,n,p,P,N,r,total;
   
   
   printf("\nEnter Payment / installment : ");
   scanf("%f",&P);
   
   printf("\nEnter Principal amount : ");
   scanf("%f",&p);
   
   printf("\nEnter No. of Payment Per Year  : ");
   scanf("%f",&N);
   
   printf("\nEnter Scheduled installment : ");
   scanf("%f",&n);
   
   total = n * P;
   f = total - p;
   
   
   r = (2+N)*f / (p*(n+1)) * 100;
   
   printf("\nAnnual interst rate : %.2f\n",r);


}

