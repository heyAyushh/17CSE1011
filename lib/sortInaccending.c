#include<stdio.h>

void main()
{
 int  size, input[100], i, j, k, smallest=99999, temp, l;
 printf("How many numbers you want to print\n");
 scanf("%d", &size);
 printf("Enter the numbers:\n");
 for(i=0; i<size; ++i)
 scanf("%d\n", &input[i]);
 
 for(j=0;j<(size-1) ;++j)               //TO sort array
 {
  for(k=0; k<(size-1); ++k)
  { 
   if(input[k]<smallest)
    smallest=k;
  }
  temp=input[j];
  input[j]=input[smallest];
  input[smallest]=temp;
 }
 printf("Following is the sorted array\n");
 for(l=0; l<(size-1); ++l)       // To display array
 printf("%d\n", input[l]);
}
 
   
