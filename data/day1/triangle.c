#include<stdio.h>
void triangle1(void){
	int i=0,j=0;
	for(i=1;i<6;i++){
		for(j=0;j<i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}
void triangle2(void){
	int i=0,j=0,a;
	for(i=1;i<6;i++){
		for(a=5-i;a>0;a--){
			printf(" ");
		}
		for(j=1;j<i+1;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}
void triangle3(void){
	int i=0,j=0;
	for(i=1;i<6;i++){
		for(j=6-i;j>0;j--){
			printf("%d",i);
		}
		printf("\n");
	}
}
void triangle4(void){
	int i=0,j=0,a;
	for(i=1;i<6;i++){
		for(a=5-i;a>0;a--){
			printf(" ");
		}	
		for(j=i;j>0;j--){
			printf("%d",i);
		}
		printf("\n");
	}
}
int main(void){
	triangle1();
	triangle2();
	triangle3();
	triangle4();
}
