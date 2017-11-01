#include<stdio.h>

int isarmstrong(int);

void main()
{
 int num, r;
 printf("Enter a three digit number");
 scanf("%d", &num);
 r=isarmstrong(num);
 if(r)
 printf("It is an armstrong number");
 else
 printf("It is not an armgstrong number");
 
 }

int isarmstrong(int num)
{
int r; 
int temp;
temp=num;
 while(num!=0)
 {
 r = r + ((num%10)*(num%10)*(num%10));
 num=num/10;
 }
if(r==temp)
return 1;
else
return 0;
}
 
