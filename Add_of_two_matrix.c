#include<stdio.h>
void main(){
	int a[100][100],b[100][100],c[100][100],i,j,m,n;
	printf("Enter number of rows and columns:");
	scanf("%d%d",&m,&n);
	//Input first matrix
	printf("Enter elements of first matrix:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\nEnter a[%d][%d] elements:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//Input second matrix
	printf("\nEnter elements of second matrix:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\nEnter b[%d][%d] elements:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//Display first matrix
	printf("\nThe first matrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//Display second matrix
	printf("\nThe second matrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	//Adding two matrix
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	//Displaying addition
	printf("\nThe addition of two matrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
