#include<stdio.h>
#include<string.h>
void main()
{
 int i, j;
 char input[100];
 printf("Enter a string :\n");
 scanf("%s", input);
 printf("Its reverse is: ");
 gets(input);
 
 printf("Using strrev: %s", strrev(input));
 
 
}
  
