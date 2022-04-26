#include<stdio.h>
void main(){
	int arr[100][100],i,j,m,n;
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
}
