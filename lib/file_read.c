#include<stdio.h>
#include<stdlib.h>

void main()
{

char ch;
FILE *fptr;

if((fptr=fopen("/home/ccuser/program.txt", "r"))==NULL){
 printf("Error!\n");
 exit(1);
 }
 /*while((ch=getc(fptr))!=EOF){
  putc(ch, fptr);
 }
 fclose(fptr);
 
 fptr=fopen("/home/ccuser/program.txt", "r");
 */
 while((ch=getc(fptr))!=EOF){
 printf("%c", ch);
 }
   
  fclose(fptr);
 }
