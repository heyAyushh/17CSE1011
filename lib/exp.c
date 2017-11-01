#include<stdio.h>

void main()
{
 int i=5;
 int *j, **k;
 j =&i; 
 k=&j;
 (**k)--;
 printf("Value in *K:%d\n", **k);
 printf("address of pointer j: %p\n", j );
 printf("address of pointer K: %p\n", k);
 printf("Value in j: %d\n", *j);
 printf("value in k: %p\n", *k);
 
 }
