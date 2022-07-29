#include<stdio.h>

int main()

{
  
  float r,a,c;
  
  printf("Enter Circle radious : ");
  scanf("%f",&r);
  
  a=22/7.0*r*r;
  c=2*3.17*r;
  
  printf("\n\t\t\t Circle colculation");
  
  printf("\n\nCircle Radious  : %.4f",r);
  printf("\nCircle area     : %.4f",a);
  printf("\nCircle ference   : %.4f\n",c);
  
  return 0;
}

