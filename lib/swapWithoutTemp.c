#include<stdio.h>
void main()
{
int a, b;
printf("Enter the value of a:\n");
scanf("%d", &a);
printf("Enter the value of b:\n");
scanf("%d", &b);
printf("The value before swapping A: %d B: %d\n", a, b);

a=a-b;
b=a+b;
a=b-a;

printf("The value after swapping A: %d B: %d\n", a, b);
}

