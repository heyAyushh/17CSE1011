#include<stdio.h>

int sumofprime(int);
int isprime(int);

void main()
{
 int num;
 printf("Enter a number:\n");
 scanf("%d", &num);
 sumofprime(num);
}

int isprime(int num) //function to find if a number is prime or not
{ 
int flag=1;
 int i;
 for(i=2;i<=num/2; ++i)
 {
  if(num%i==0)
  {
   flag=0;
   break;
  }
 }
 return flag;
}

int sumofprime(int num)  //function to find if a no. is sum of two prime nos.
{
 int i;
 for(i=2; i<num/2; ++i)
 {
  if(isprime(i)==1)
  {
   if(isprime(num-i)==1)
   {
    printf("%d = %d + %d", num, i, num-i);
   }
  }
 }
 return 0;
}
