#include<stdio.h>
void rectangle(int n, int m, int d){
	int i,j,k;
	for(i=m;i>0;i--){
		if((i<=d)||(i>m-d)){
			for(j=n;j>0;j--){
				printf("*");
			}
			printf("\n");
		}else{
			for(j=d;j>0;j--){
				printf("*");
			}
			for(j=n-2*d;j>0;j--){
				printf(" ");
			}
			for(j=d;j>0;j--){
				printf("*");
			}
			printf("\n");
		}
	}
}
int main(void){
	int a=0,b,c;
	do{
		printf("plz input the width:");
		scanf("%d",&a);
	}while(a%2!=0);
	printf("plz input the hight:");
	scanf("%d",&b);
	printf("plz input the density:");
	scanf("%d",&c);
	rectangle(a,b,c);
}
