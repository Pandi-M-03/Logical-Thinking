#include<stdio.h>
int main()
{
 float a,b,c;
 
 printf("\n\tColculation hypotenuse \n");
 
 printf("\nEnter Value is A : ");
 scanf("%f",&a);
 
 printf("\nEnter Value is B : ");
 scanf("%f",&b);
 
 c=sqrt(a*a + b*b);
 
 printf("\nValue of  Hypotenuse : %.2f\n",c);
 
}

