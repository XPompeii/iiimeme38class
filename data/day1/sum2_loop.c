#include<stdio.h>
int main(void){
	int i,j,sum=0,a[10]={0};
	for(i=0;i<10;i++){
		a[i]=i+1;
		for(j=0;j<=i;j++){
			printf("%d",a[j]);
			sum+=a[j];
			if(j==i) printf("=%d\n",sum);
			else printf("+");
		}
		sum=0;
	}				
}
