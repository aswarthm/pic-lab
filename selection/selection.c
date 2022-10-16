#include<stdio.h>

void main(){
	int n;
	printf("Enter size of the array :");
	scanf("%d", &n);

	int a[n];
	printf("Enter the array elements ");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("The sorted array is ");
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
