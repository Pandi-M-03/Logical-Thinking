#include<stdio.h>

int main()
{
  float r,h,v;
  
  printf("\n\tVolume of cone Colculation\n");
  
  printf("\nEnter cone Radious : ");
  scanf("%f",&r);
  
  printf("\nEnter cone Height  : ");
  scanf("%f",&h);
  
  v=1.0/3*(22.0/7)*r*r*h;
  
  
  printf("\n\tVolume of cone : %.2f\n",v);

}

