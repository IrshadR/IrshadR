#include<stdio.h>
#include<math.h>
void main(){
	int a[100][100],i,j,m,n,sum=0;
	float norm;
	printf("Enter rows and columns of matrix:");
	scanf("%d%d",&m,&n);
	//input matrix
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//Display matrix
	printf("\nThe matrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//Norm of matrix
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum=sum+(a[i][j]*a[i][j]);
		}
	}
	norm=sqrt(1.0*sum);
	printf("\nThe norm of matrix is %.2f",norm);
}
