#include<stdio.h>
void main( ){
	int arr[100][100],i,j,n,sum=0;
	printf("Enter size of square matrix:");
	scanf("%d",&n);
	//Input array
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter arr[%d][%d] element:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	//Display array
	printf("The matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	//Sum of main diagonal
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum=sum+arr[i][j];
			}
		}
	}
	printf("\nThe sum of main diagonal is %d",sum);
}
