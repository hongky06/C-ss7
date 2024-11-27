#include<stdio.h>
int main(){
	int arr[5];
	printf("nhap phan tu 1: ");  
	scanf("%d",&arr[0]);
	printf("\n nhap phan tu 2: ");
	scanf("%d",&arr[1]);
	printf("\n nhap phan tu 3: ");
	scanf("%d",&arr[2]);
	printf("\n nhap phan tu 4: ");
	scanf("%d",&arr[3]);
	printf("\n nhap phan tu 5: ");
	scanf("%d",&arr[4]);
	
         for(int i = 0 ; i < sizeof(arr)/sizeof(int)  ;i++){
         	printf (" arr{%d} = %d \n",i,arr[i]);
         	++arr[i];
		 }
	
	
	
	
	return 0;
}
