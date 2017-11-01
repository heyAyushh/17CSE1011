#include<stdio.h>
int factroial(int);
int isStrong(int);

void main()
{
 int num;
 printf("Enter a number:\n");
 scanf("%d", &num);
 if(isStrong(num))
  printf("It is a strong number\n");
 else
  printf("It is not a strong number\n");
  
}

int factorial(int num)
{
 int i, fact=1;
 for(i=1; i<=num; ++i)
 {
  fact=fact*i;
 }
return fact;
}

int isStrong(int num)
{
 int num2=0, r, check;
 check=num;
 while(num!=0)
 {
  r=num%10;
  num2=num2 + factorial(r);
  num=num/10;
 }
 if(num2==check)
 return 1;
 else
 return 0;
}
