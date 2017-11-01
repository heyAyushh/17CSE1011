#include<stdio.h>
int generate(int*);
void main()
{
int input1[15], input2[15], i, j, k, r;
printf("Enter first binary numbers\n");
for(i=0; i!='\0'; ++i)
scanf("%d", input1[i]);
printf("Enter second binary numbers\n");
for(j=0; j!='\0'; ++j)
scanf("%d", input2[j]);

if(i>=j)
 r=i/2;
 else
 r=j/2;
for(k=r; k<'\0'; ++k)
{
temp=input1[k];
input1[k]=input2[k]
input2[k]=temp;
}
}
