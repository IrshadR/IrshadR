#include<stdio.h>
void main(){
	int a[100][100],i,j,m,n,sum=0;
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
	//Finding even sum
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]%2==0){
			sum=sum+a[i][j];
		}
		}
	}
	printf("\nThe sum of even elements is %d",sum);
}
