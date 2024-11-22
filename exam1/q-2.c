#include<stdio.h>

int main(){
	
	int a, b;
	
	printf("enter the numbers:");
	scanf("%d", &a);
	
	printf("enter the numbers:");
	scanf("%d", &b);
    
	printf("befor swapping : a = %d , b = %d\n", a, b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("after swapping : a = %d, b = %d\n",a, b);
	
	return 0;	
	
}
