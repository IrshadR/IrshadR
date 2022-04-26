#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	int a[100][100],b[100][100],c[100][100],i,j,k,n1,n2,m1,m2,sum;
	printf("Enter rows and columns of first matrix:");
	scanf("%d%d",&m1,&n1);
	printf("Enter rows and columns of second matrix:");
	scanf("%d%d",&m2,&n2);
	if(n1!=m2){
		printf("\nThe multiplication is not possible");
		exit(0);
	}
	//Input first matrix
	printf("\nEnter first matrix element:");
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			printf("\nEnter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//Input second matrix
	printf("\nEnter second matrix element:");
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			printf("\nEnter b[%d][%d] element:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//Display first matrix
	printf("\nThe first matrix is:\n");
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//Display second matrix
	printf("\nThe second matrix is:\n");
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	//Multiplication of two matrix
	for(i=0;i<m1;i++){
		for(j=0;j<n2;j++){
			sum=0;
			for(k=0;k<n1;k++){
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		}
	}
	//Display multiplication
	printf("\nThe multiplication of two matrix is:\n");
	for(i=0;i<m1;i++){
		for(j=0;j<n2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
