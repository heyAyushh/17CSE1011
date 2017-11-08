#include<stdio.h>

int main(){
	char st[5][5];
	int i;
	for(i=0; i<5; i++){
		scanf("%s", st[i]);
	}
	
	for(i=0; i<5; i++){
		printf("%s\n", st[i]);
	}
	return 0;
}
