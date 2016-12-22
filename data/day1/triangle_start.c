#include<stdio.h>
void triangle_start(int odd){
	int i,j,k=1,m;
	for(i=odd;i>0;i--){
		m=(odd-k)/2;
		for(j=0;j<m;j++){
			printf(" ");
		}
		for(j=0;j<k;j++){
			printf("*");
		}
		if(i>odd/2+1){
			k+=2;
		}else{
			k-=2;
		}
		printf("\n");
	}	
}
int main(void){
	int a;
	do{
		printf("plz input an odd number:");
		scanf("%d",&a);
	}while(a%2==0);	
	triangle_start(a);
}
