#include<stdio.h>
//Program to Illustrate pointer to a function

void sample(int a){
 printf("The value of a is %d", a);
  }
  
void main() 
{ 
 void(*ptr)(int) = &sample;
 (*ptr)(10);
}
 
