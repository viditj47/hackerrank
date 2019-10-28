#include<stdio.h>

int main()
{
  printf("Multiplication of 2 Number :\n");
  float a,b,mul;
  printf("Enter Your First Number => ");
  scanf("%f",&a);
  printf("Enter Your Second Number => ");
  scanf("%f",&b);
  mul=a*b;
  printf("Your Multiplication Result => ");
  printf("%0.2f",mul);
  return 0;
}
