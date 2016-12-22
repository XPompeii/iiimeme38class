#include<stdio.h>
#define MAX ((a>b)?a:b)
#define MIN ((a<b)?a:b)
int gcd(int a, int b){
	if(MIN==0) return MAX;
	else return gcd(MAX-MIN,MIN);
}
int main(void){
	printf("%d\n",gcd(153,27));
}
