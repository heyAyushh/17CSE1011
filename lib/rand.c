#include <stdio.h>
#include <stdlib.h>
int main()
{
int min=49, max=51;
 printf("%d\n",min + rand() % (max+1 - min));
 return(0);
}
