#include<stdio.h>

void main(){
	int n;
	printf("Enter size of the array ");
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("The sorted elements are ");
	for(int i =  0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
