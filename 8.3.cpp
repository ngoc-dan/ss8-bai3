#include<stdio.h>
int main(){
	int n;
	printf("nhap hang va cot : ");
	scanf("%d",&n);
	int arr[n][n]={};
	
	for(int i=0;i<n;i++){
		printf("\n");
		for(int t=0;t<n;t++){
			arr[i][t]=n;
			printf("%d ",arr[i][t]);
		}
	}
	
	return 0;
}
