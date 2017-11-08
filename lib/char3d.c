#include<stdio.h>
#include<stdlib.h>


int main(){
	int dimX = 10, dimY = 12, dimZ = 30;
	
	char ***arr;
	
	arr  = new int**[dimX];
	int i, j;
	for(i=0; i<dimX; i++){
		arr[i] = new int*[dimY];
		for(j = 0; j <dimY; j++){
			arr[i][j] = new char[dimZ];
			printf("%d %d", i, j);
			scanf("%s", arr[i][j]);
		}
	}
	for(i=0; i<dimX; i++){
		arr[i] = new char *[dimY];
		for(j = 0; j <dimY; j++){
			arr[i][j] = new char [dimZ];
			printf("%s", arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
