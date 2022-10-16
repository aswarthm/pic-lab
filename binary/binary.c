#include<stdio.h>

void main(){
	int n;
	printf("Enter size of the array ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the elements ");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	int ele;
	printf("Enter the search element ");
	scanf("%d", &ele);

	int high = n-1;
	int low = 0;

	while(high >= low){
		int mid = (high+low)/2;
		if(a[mid] == ele){
			printf("Found %d at position %d\n", ele, mid);
			return;
		}
		else if(a[mid] > ele){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	printf("Element not found\n");
}
