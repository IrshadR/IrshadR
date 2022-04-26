#include<stdio.h>
void main(){
	int a[100][100],i,j,m,n,sum=0;
	float avg;
	printf("Enter number of rows and columns:");
	scanf("%d%d",&m,&n);
	//Input array
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//Display array
	printf("The array is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//Finding average
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum=sum+a[i][j];
		}
	}
	avg=(1.0*sum)/(m*n);
	printf("\nThe average of  array elements is %.2f",avg);
}
