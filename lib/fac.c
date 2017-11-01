#include<stdio.h>
int fac(int x);
int main(void){
int a;

printf("ENTER NUMER:");
scanf("%d",&a);

printf("FACTORiAL = %d\n",fac(a));


}

int fac(int x){
int i;
int p=1;
for(i=x;i>0;i--){
p=p*i;
}
return(p) ;
}


