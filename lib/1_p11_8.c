#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/* This program takes the details of n student. And writes the details of student whose roll no starts with 2008 into file 2008.txt */

struct student{
	char name[20];
	int age;
	char rollNo[15];
};


int main(){
	struct student *ptr;
	int i, n;
	printf("Enter the no. of students\t");
	scanf("%d", &n);
	ptr = malloc(n*sizeof(struct student));
	char check[]={'2', '0', '0', '8', '\0'};
	printf("\n\n");
	for(i=0; i<2; i++){
		printf("Enter Name\t");
		scanf("%s", ptr[i].name);
		printf("Enter age\t");
		scanf("%d", &ptr[i].age);
		printf("Enter Roll no\t");
		scanf("%s", ptr[i].rollNo);
		printf("\n\n");
	}
	
	FILE *fptr;
	fptr = fopen("2008.txt", "w");
	if(fptr==NULL){
		printf("Error opening the file\n");
		exit(0);
	}
	
	for(i=0; i<2; i++){
		if(!strncmp(check, ptr[i].rollNo, 4)){ 
		//comparing the first four characters of check and rollNo
			fprintf(fptr, "%s\t", ptr[i].name);
			fprintf(fptr, "%s\t", ptr[i].rollNo);
			fprintf(fptr, "%d\n\n", ptr[i].age);
		}
	}
	
	fclose(fptr);
	return 0;
}
