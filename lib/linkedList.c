#include<stdio.h>
#include<stdlib.h>

struct node{
 int info;
 struct node *link;
 };
 
 struct node *InsertInBeginning(struct node*, int);
 void InsertAtEnd(struct node*, int);
 struct node *createList(struct node*);
 void displayList(struct node*);
 void InsertAfter(struct node*, int, int);
 struct node *InsertBefore(struct node*, int, int);
 struct node *InsertAtIndex(struct node*, int, int);
 struct node *delete(struct node*, int);
 struct node *reverse(struct node*);
 
 
 void main()
 {
  int choice, data, x, k;
  struct node *start=NULL;
  printf("\t\t**********Linked List**********\n\n");
  start=createList(start);
  while(1){
  printf("\t1.Display List\n");
  printf("\t2.Insert a node at the beginnig\n");
  printf("\t3.Insert a node at the end\n");
  printf("\t4.Insert a node after a given node\n");
  printf("\t5.Insert a node before a given node\n");
  printf("\t6.Insert at a index\n");
  printf("\t7.Delete a node\n");
  printf("\t8.Revers the list\n");
  printf("\t9.Quit\n");
  printf("\t\tEnter choice\n");
  scanf("%d", &choice);
  
  if(choice==9){
     printf("****************************************************\n\n");
     break;
     }
  
  switch(choice){
   
   case 1: displayList(start);
            break;
   case 2: printf("Enter node\n");
            scanf("%d", &data);
            start=InsertInBeginning(start, data);
            break;
   case 3: printf("Enter node\n");
            scanf("%d", &data);
            InsertAtEnd(start, data);
            break;
   case 4: printf("Enter node\n");
            scanf("%d", &data);
            printf("After which node?\n");
            scanf("%d", &x);
            InsertAfter(start, data, x);
            break;
   case 5: printf("Enter node\n");
            scanf("%d", &data);
            printf("Before which node?\n");
            scanf("%d", &x);
            start=InsertBefore(start, data, x);
            break;
   case 6: printf("Enter the node\n");
            scanf("%d", &data);
            printf("Enter the Index\n");
            scanf("%d", &k);
            start=InsertAtIndex(start, data, k);
            break;
   case 7: printf("Enter the node to delete\n");
            scanf("%d", &x);
            printf("\tDELETED\n\n\n");
            start=delete(start, x);
            break;
   case 8: printf("List reversed\n\n");
            start=reverse(start);
            break;
   default:break;
  }
 }
}
 
 
 
 
 struct node *InsertInBeginning(struct node *start, int data){
 struct node *temp;
 temp = (struct node*)malloc(sizeof(struct node));
 temp->info=data;
 temp->link=start;
 start=temp;
 return start;
 }
 
 
 
 void InsertAtEnd(struct node* start, int data){
 struct node *temp, *p;
 p=start;
 
 while(p->link!=NULL){
 p=p->link;
 }
 temp = (struct node*)malloc(sizeof(struct node));
 temp->info=data;
 p->link=temp;
 temp->link=NULL;
 }
 
 
 
 
 struct node *createList(struct node *start){
 int n, i, data;
 
 printf("Enter the number of nodes: \n");
 scanf("%d", &n);
 if(n==0)
    return start;
    
 printf("Enter the first node\n");
 scanf("%d", &data);
 start=InsertInBeginning(start, data);
 
 for(i=2; i<=n; i++){
 printf("Enter the(%d) node\n", i);
 scanf("%d", &data);
 InsertAtEnd(start, data);
  }
 return start;
}
 
 void displayList(struct node *start){
 struct node *p;
 
 if(start==NULL){
  printf("List is empty\n\n");
  return;
  }
 p=start;
 while(p!=NULL)
 {
  printf("%d ", p->info);
  p=p->link;
 }
 printf("\n\n");
}
 
 
void InsertAfter(struct node *start, int data, int x){

struct node *temp, *p;
if(start==NULL)
   return;
p=start;

while(p!=NULL){
 if(p->info==x)
    break;
 p=p->link;
 }
 if(p==NULL){
  printf("Node not found\n\n");
  exit(0);
  }
temp = (struct node*)malloc(sizeof(struct node));
temp->info=data;
temp->link=p->link;
p->link=temp;

}



struct node *InsertBefore(struct node *start, int data, int x){
struct node *temp, *p;
p=start;

while(p!=NULL){
if(p->link->info==x)
   break;
p=p->link;
 }
if(p==NULL){
  printf("Node not found\n\n");
  return start;
  }
temp = (struct node*)malloc(sizeof(struct node));
temp->info=data;
temp->link=p->link;
p->link=temp;
return start;
}


 struct node *InsertAtIndex(struct node *start, int data, int k){
 struct node *temp, *p;
 int i;
 p=start;
 
 for(i=1; i<=k-2 && p!=NULL; i++){
 p=p->link;
 }
 if(p==NULL){
  printf("You can enter upto %dth node\n\n", i);
  return start;
  }
temp = (struct node*)malloc(sizeof(struct node));
temp->info=data;
temp->link=p->link;
p->link=temp;
return start;
}


struct node *delete(struct node *start, int x){
struct node *temp, *p;
p=start;
if(start==NULL)
 return start;

while(p!=NULL){
 if(p->link->info==x)
 break;
 p=p->link;
 }
temp=p->link;
p->link=p->link->link;
free(temp);
return start;
}


struct node *reverse(struct node *start){
struct node *prev, *next, *ptr;
prev=NULL;
ptr=start;
while(ptr!=NULL){
next=ptr->link;
ptr->link=prev;
prev=ptr;
ptr=next;
}
start=prev;
return start;
}
 


 
 
 

 
