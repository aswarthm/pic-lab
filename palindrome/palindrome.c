#include<stdio.h>

void check(char a[]);
int strLen(char a[]);

void main(){
	char a[15];
	printf("Enter the string ");
	scanf("%s", a);
//	printf("%d", strLen(a));
	check(a);
	//printf("%s", a);
}

void check(char a[]){
	int len = strLen(a);
	for(int i = 0; i<len/2; i++){
		if(a[i] != a[len-i-1]){
			printf("Not a palindrome\n");
			return;
		}
	}
	printf("Palindrome\n");
}

int strLen(char a[]){
	int len = 0;
	while(a[len] != '\0'){
		len++;
	}
	return len;
}
