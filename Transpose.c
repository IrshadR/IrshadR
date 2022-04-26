#include<stdio.h>
void main(){
	int a[100][100],i,j,n,m;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of columns:");
	scanf("%d",&n);
	//Input array
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter a[%d][%d] elements:",i,j);
			scanf("%d",&a[i][j]);
		}
	} 
		//Display array
		printf("\nThe array is:\n");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("%d\t",a[i][j]);
			}
			printf("\n");
	}
	//Finding transpose
	printf("\nThe transpose of matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	
}
