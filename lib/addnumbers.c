#include<stdio.h>
int addnumbers(int);

void main()
{
 int num, p;
 printf("Enter a positive number\n");
 scanf("%d", &num);
 p=addnumbers(num);
 printf("Sum is %d\n", p);
 
}

int addnumbers(int num)
{
 if(num!=0)
 return num + addnumbers(num-1);
 else
 return num;
}
