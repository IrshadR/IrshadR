#include<stdio.h>
void main(){
	int arr[100][100],i,j,m,n,sum;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of columns:");
	scanf("%d",&n);
	//Matrix input
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	//Matrix Display
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	//Displaying sum of individual rows
	for(i=0;i<n;i++){
		sum=0;
		for(j=0;j<m;j++){
			sum=sum+arr[j][i];
		}
		printf("\nThe sum of %d columns is %d",i,sum);
	}
}
