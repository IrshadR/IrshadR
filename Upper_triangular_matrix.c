#include<stdio.h>
void main(){
	int arr[100][100],i,j,n;
	printf("Enter size of matrix:");
	scanf("%d",&n);
	//Matrix input
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter arr[%d][%d] element:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	//Display matrix
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	//Finding upper triangular matrix
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<j){
				arr[i][j]=0;
			}
		}
	}
	//Displaying upper triangular matrix
	printf("\nThe upper triangular matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
