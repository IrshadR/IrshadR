#include<stdio.h>
int main(){
	int arr[100][100],i,j,m,n,high;
	printf("Enter number of rows and columns:");
	scanf("%d%d",&m,&n);
	//Input array
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter arr[%d][%d] element:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	//Display array
	printf("The matrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
    //Highest element
    high=arr[0][0];
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		if(arr[i][j]>high){
    			high=arr[i][j];
			}
		}
	}
	printf("\nThe highest element in the matrix is %d",high);
	return 0;
}
