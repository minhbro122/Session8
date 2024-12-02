#include<stdio.h>

int main() {
 int n;
 printf("nhap so luong phan tu cua mang");
 scanf("%d",&n);
 
 int arr[n];
 printf("nhap cac phan tu cua mang \n");
 
 for(int i = 0; i<n; i++) {
 	scanf("%d",&arr[i]) ;
 }
 printf("cac phan tu cua mang la \n");
 for(int i = n; i>=0 ; --i){
 	
 	printf("%d",&arr[i]);
 	
 }
	
	
	
	return 0; 
}
