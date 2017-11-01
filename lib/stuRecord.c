#include<stdio.h>

struct student{
 char name[50];
 int rollNo;
 int age;
 char branch[3];
 };


 
void main(){
 int n;
struct student *ptr;

printf("How many records you want to create? \n");

scanf("%d", &n);


ptr = (struct student*)malloc(n*sizeof(struct student));

int i;

for(i=1; i<=n; i++){
printf("Enter details of student %d\n",i);
printf("Enter name :\n");
scanf("%s", (ptr+i)->name);
printf("Enter age :\n");
scanf("%d", &(ptr+i)->age);
printf("Enter branch :\n");
scanf("%s", (ptr+i)->branch);
printf("Enter roll no :\n");
scanf("%d", &(ptr+i)->rollNo);
 }
 
 
 
for(i=1; i<=n; i++){
printf("Details of student %d\n",i);
printf("%s", (ptr+i)->name);
printf("\n");
printf("%d", (ptr+i)->age);
printf("\n");
printf("%s", (ptr+i)->branch);
printf("\n");
printf("%d", (ptr+i)->rollNo);
 }
}




