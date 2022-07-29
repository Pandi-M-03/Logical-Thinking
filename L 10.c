#include<stdio.h>

int main()
{
  float p,r,n,t;
  
  printf("\n\t\tColculation  Total principal\n");
  
  printf("\nEnter principal amount : ");
  scanf("%f",&p);
  
  printf("\nEnter rate of interest : ");
  scanf("%f",&r);
  
  printf("\nEnter NO. of year      : "); 
  scanf("%f",&n);
 
   
   t=p*pow(1+r/100,n);
   
  printf("\n\tTotal principal amount : %.2f\n",t);

}
  

