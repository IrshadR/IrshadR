#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[100][100],b[100][100],c[100][100],i,j,k,m1,n1,m2,n2;
	printf("Enter rows and columns of 1st matrix:");
	scanf("%d%d",&m1,&n1);
	printf("Enter rows and columns of 2nd matrix:");
	scanf("%d%d",&m2,&n2);
	if(n1=!m2){
		printf("\nThe multiplication is not possible");
	}else{
	//1st matrix input
	printf("\nEnter 1st matrix elements:");
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			printf("Enter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//2nd matrix input
	printf("\nEnter 2nd matrix elements:");
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			printf("Enter b[%d][%d] element:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//Display 1st matrix
	printf("\nThe 1st matrix is:\n");
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		//Display 2nd matrix
	printf("\nThe 2nd matrix is:\n");
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
}
