#include<stdio.h>

int main ()
{
  int num1, num2;
  num1=10,num2=16;

  if (num1 == num2)
    printf("both are equal");
  else if (num1 > num2) 
    printf("%d is greater", num1);
  else
    printf("%d is greater", num2);

  return 0;
}