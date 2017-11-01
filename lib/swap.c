#include<stdio.h>

void swap(int*, int*);

void main()
{
 int a, b;
 printf("Enter the value of a:\n");
 scanf("%d", &a);
 printf("Enter the value of b:\n");
 scanf("%d", &b);
 
 swap(&a, &b);
 
 printf("The value of a: %d", a);
 printf("The value of b: %d", b);
}

void swap(int *a, int *b)
{
 int temp;
 temp= *a;
 *a= *b;
 *b=temp;
 }
 
 
