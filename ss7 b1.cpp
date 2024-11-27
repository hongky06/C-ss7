#include<stdio.h>
int main(){
int arr[5] = {1,2,3,4,5};
for(int i = 0 ;i < sizeof(arr)/sizeof(int);i++){
	printf("\n phan tu thu [%d] = %d ",i,arr[i]);
}
	printf("\n do dai cua mang la: %d ",sizeof(arr)/sizeof(int));
	
	return 0;
}
