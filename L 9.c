#include<stdio.h>

int main()
{
  float p,r,t,i;
  
  printf("\n\t\tColculation  Simple interest\n");
  
  printf("\nEnter principal amount : ");
  scanf("%f",&p);
  
  printf("\nEnter rate of interest : ");
  scanf("%f",&r);
  
  printf("\nEnter time of year     : "); 
  scanf("%f",&t);
  
  
  i=p*(r/100)*t;
  
  
  printf("\n\tYour simple interst : %.2f\n",i);
}

