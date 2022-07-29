#include<stdio.h>

int main()
{
  float p,r,n,s;
  
  printf("\n\tFind Your Maturity Value\n"); 
  
  printf("\nEnter Your Principal amount : ");
  scanf("%f",&p);
  
  printf("\nEnter your rate of interest : ");
  scanf("%f",&r);
  
  printf("\nEnter No. year              : ");
  scanf("%f",&n);
  
  s = p*(1+r/100*n/360);
  
  printf("\n\tYour Maturity Value  : %.2f\n",s);
}

