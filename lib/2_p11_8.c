#include<stdio.h>
#include<stdlib.h>
//Poiter to array concept
int main(){
	int *ptr, i;
	int arr[5];
	printf("Enter elements\n");
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	ptr = &arr[0];
	for(i=0; i<5; i++){
		printf("%d ", *(ptr+i)*15);
	}
	
	return 0;
}
