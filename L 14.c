#include<stdio.h>
int main()
{
  float f,c;
  
  printf("\n\tConvert The temperature\n");
  
  printf("\nEnter fahrenheit value : ");
  scanf("%f",&f);
  
  c=5.0/9*(f-32);
  
  printf("\n\t %.2f fahrenheit is  : %.2f centigrade\n",f,c);
}

