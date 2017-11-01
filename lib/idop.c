#include<stdio.h>
void main()
{
int x=5, y=5;
y=(++x) + (++x)+ (++x)+ (x++);
printf("(++x) + (++x) + (++x) + (x++)  %d\n", y);
x=5, y=5;
y=(++x) + (x++)+ (++x)+ (x++);
printf("(++x) + (x++) + (++x) + (x++)  %d\n", y);
x=5, y=5;
y=(x++) + (++x)+ (++x)+ (x++);
printf("(x++) + (++x) + (++x) + (x++)  %d\n", y);
x=5, y=5;
y=(x++) + (x++)+ (++x)+ (x++);
printf("(x++) + (x++) + (++x) + (x++)  %d\n", y);
}

