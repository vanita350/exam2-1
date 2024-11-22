#include<stdio.h>
int main(){
	int n, i = 1, sum = 0;
	
	printf("enter the value of n :");
	scanf("%d", &n);
	
	do{
		if (i % 2 !=0) {
			sum += i;
		}
		i++;
	} while (i <= n);
	
	printf("the sum of all old number between 1 and %d is: %d\n",n, sum);
	return 0;
}
