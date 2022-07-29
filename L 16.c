#include<stdio.h>
int main()
{
  int m,d,j;
  
  printf("\n\tJulian Date Colculation\n");
  
  printf("\nEnter Month : ");
  scanf("%d",&m);
  
  printf("\nEnter Date  : ");
  scanf("%d",&d);
  
  j = (m-1)* 30 + d;
  
  printf("\n Julian date is %d/%d : %d\n",m,d,j);
  
  return 0;
}

