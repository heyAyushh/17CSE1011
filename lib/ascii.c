#include<stdio.h>

int findasciiof(char); 

int main()
{
 char val;
 int r;
 printf("Enter the character");
 scanf("%c", &val);
 r=findasciiof(val);
 printf("The ASCII value of %c is %d", val, r);
 return 0;
}

int findasciiof(char val)
{
 return val;
}
