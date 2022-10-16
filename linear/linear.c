#include<stdio.h>

void main(){
	int n;
	printf("Enter size of the array ");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of the array ");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	int ele;
	printf("Enter the search element ");
	scanf("%d", &ele);

	for(int i = 0; i < n; i++){
		if(a[i] == ele){
			printf("Found %d at position %d\n", ele, i);
			return;
		}
	}
	printf("Element not found\n");
}
