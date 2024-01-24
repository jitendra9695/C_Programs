// 15/01/22

#include<stdio.h>
int main()
{
 float bs, hra, da, gross ;
 printf (" enter the bs of ramesh ");
 scanf("%f", &bs);
 da=bs*40/100;
 hra=bs*20/100;
 gross= bs+hra+da;
 printf("bs of ramesh=%f\n", bs);
 printf("da=%f\n", da);
 printf("hra=%f\n", hra);
 printf("gross=%f", gross);
 return 0;
}