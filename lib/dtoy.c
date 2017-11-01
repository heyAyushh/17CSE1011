#include<stdio.h>

void main()
{
int days, weeks, years, input;

printf("Enter the no. of days\n");
scanf("%d", &input);

years = input/365;
weeks= (input%365)/7;
days= input-(years*365 + weeks*7);

printf("No. of years are %d\n", years);
printf("No. of weeks are %d\n", weeks);
printf("No. of days are %d\n", days);

}

