#include<stdio.h>
void main(){
	int arr[100][100],i,j,m,n,sum=0;
	printf("Enter number of rows and columns:");
	scanf("%d%d",&m,&n);
	//Input array
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter arr[%d][%d] element:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	//Output array
	printf("The matrix array is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	//Calculating sum
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum=sum+arr[i][j];
		}
	}
	printf("\nThe sum of all elements in m*n matrix is %d",sum);
}
