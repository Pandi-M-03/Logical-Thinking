#include<stdio.h>

int main()
{
  float p,r,n,t1,t2,j;
  
  printf("\n\t\tColculation  Compounding daily \n");
  
  printf("\nEnter principal amount            : ");
  scanf("%f",&p);
  
  printf("\nEnter rate of interest            : ");
  scanf("%f",&r);
  
  printf("\nEnter NO. of year                 : "); 
  scanf("%f",&n);
  
  printf("\nEnter No. of interest in compound : ");
  scanf("%f",&j);
 
   
   t1= p * pow(1+(r/100)/j, n*j);
   
   j=1;
   t2= p * pow(1+(r/100)/j, n*j);
   
   
  printf("\n\tTotal compounding daily : %.2f\n",t1);
  printf("\n\tTotal compounding yearly : %.2f\n",t2);
  
  printf("\n\tinterst compounding daily : %.2f\n",t1 - p);
  printf("\n\tinterst compounding yearly : %.2f\n",t2 - p);
  
  return 0;


}
  

