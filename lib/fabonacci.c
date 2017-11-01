#include<stdio.h>
void main()
{
int i=0, n, sum1=0, sum2=1, temp;
printf("Upto how many terms\n");
scanf("%d", &n);
n=n-2;
printf("0\t");
printf("0\t");
while(i!=n)
{
 temp=sum2;
 sum2=sum2+sum1;
 sum1=temp;
 i++;
 printf("%d\t", sum2);
}
printf("\n");
}
