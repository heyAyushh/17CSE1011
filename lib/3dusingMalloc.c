#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *arr;
	int i, j, k;
	arr = malloc(3*3*3*sizeof(int));
	int count = 0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			for(k=0; k<3; k++){
				*(arr + 2*i + 2*j + k) = count++;
			}
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			for(k=0; k<3; k++){
				printf("%d ", *(arr + 2*i + 2*j + k));
			}
			printf("\n");
		}
		printf("\n\n");
	}
	
	return 0;
}
