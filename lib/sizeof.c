#include<stdio.h>
int main()
{
 int integerType;
 float floatType;
 char characterType;
 double doubleType;
 
 printf("The size of int:%ld bytes \n", sizeof(integerType));
 printf("The size of float:%ld bytes \n", sizeof(floatType));
 printf("The size of char:%ld bytes \n", sizeof(characterType));
 printf("The size of double:%ld bytes \n", sizeof(doubleType));
 
 return 0;
 }
