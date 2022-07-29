#include<stdio.h>

int main()
{
  int a,b,c,d;
   
   printf("\n\t\tRemainder  Colculation\n\n");
   printf("\n1.Enter Your First No  : ");
   scanf("%d",&a);
   
   printf("\n2.Enter Your Second No : ");
   scanf("%d",&b);
  
  
   c=a/b;
   d=c*b;
  
  printf("\nColculation to remainder of  %d/%d : %d\n",a,b,a-d);
}

