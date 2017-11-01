#include<stdio.h>

void main()
{
int hrs, rate, employees_id;
float salary;

printf("Input the Employees ID(Max. 10 chars):\n");
scanf("%d\n",employees_id);
printf("Input the working hrs\n");
scanf("%d\n", hrs);
printf("Salary amount/hr:\n");
scanf("%d\n", rate);
printf("Employees ID %d\n", employees_id);

salary=rate*hrs;

printf("Salary = U$ %.2f", salary);

} 
 




