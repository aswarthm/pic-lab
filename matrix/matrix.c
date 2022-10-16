#include<stdio.h>

void main(){
	int x1, y1, x2, y2;

	printf("Enter dimensions of the matrices ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	if(y1 != x2){
		printf("Incompatible\n");
		return;
	}

	int a[x1][y1], b[x2][y2], res[x1][y2];

	printf("Enter elements of the first matrix ");
	for(int i = 0; i < x1; i++){
		for(int j = 0; j < y1; j++){
			scanf("%d", &a[i][j]);
		}
	}

        printf("Enter elements of the second matrix ");
        for(int i = 0; i < x2; i++){
                for(int j = 0; j < y2; j++){
                        scanf("%d", &b[i][j]);
                }
        }

        for(int i = 0; i < x1; i++){
                for(int j = 0; j < y2; j++){
                        res[i][j] = 0;
                        for(int k = 0; k < y1; k++){
				res[i][j] += a[i][k] * b[k][j];
                        }
                }
        }

	printf("Multiplied matrix \n");
        for(int i = 0; i < x1; i++){
		for(int j = 0; j < y2; j++){
			printf("%d ", res[i][j]);
		}
		printf("\n");
        }

}
