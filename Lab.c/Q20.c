#include<stdio.h>
int main()
{
   float hardness, carbon_content, tensile_strength ; 
   printf(" write the value of hardness \n ");
   scanf(" %f", &hardness);
   printf(" write the value of  carbon_content \n");
   scanf(" %f",&carbon_content);
   printf(" write the value of tensile_strenght \n");
   scanf(" %f",&tensile_strength);
   if (hardness>50 && carbon_content<0.7 && tensile_strength>5600 )
   {
       printf(" Grade 10 ");
   }
   else if ( hardness>50 && carbon_content<0.7)
   {
       printf( "Grade 9");
   }
   else if(carbon_content<0.7 && tensile_strength>5600)
   {
       printf(" Grade 8");
   }
   else if (hardness>50 && tensile_strength>5600)
   {
       printf(" Grade 7");
   }
   else if (hardness>50 || carbon_content<0.7 || tensile_strength>5600)
   {
       printf( " Grade 6");
   }
   else
   {
       printf(" Grade 5");
   }
   return 0;
   
}