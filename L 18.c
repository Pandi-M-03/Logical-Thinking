#include<stdio.h>

int main()
{
   float xgross,xsocial,xincome,xnet;
   float ygross,yretire,yincome,ynet;
   
   xgross=23564.99;
   xsocial=xgross *6.85/100;
   xincome=xgross * 23.5/100;
   xnet = xgross-xsocial-xincome;
   
   ygross = 19874;
   yretire = 850.45;
   yincome = ygross *16.03/100;
   ynet = ygross-yretire-yincome;
   
   
   printf("\nXnet  Value : %.2f",xnet);
   printf("\nYnet  Value : %.2f",ynet);
   
}

