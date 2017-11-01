#include<stdio.h>

int noofdigits(int);

void main()
{
 int num, r;
 printf("Enter a no.");
 scanf("%d", &num);
 r=noofdigits(num);
 printf("The no. of digits in %d is %d", num, r);
 
}

int noofdigits(int num)
{ 
 int count=0;
 while(num!=0)
 {
  count++;
  num=num/10;
 }
return count;
}
