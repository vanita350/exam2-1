#include<stdio.h>

int main(){
	int i,j;
	int n = 5;
	
	for (i = 0; i < n; i++){
		for(j = n-5; j <= n; j++){
			printf("%d", j);
		}
		printf("\n");
	}
}
