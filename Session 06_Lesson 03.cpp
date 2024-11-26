#include <stdio.h>

int main(){
	int num, matkhau = 123;
	printf("Moi ban nhap mat khau: ");
	scanf("%d",&num);
			
		if(num != matkhau){
			printf("Ban nhap sai mat khau roi nha \n"); 
		}else{
			printf("Ban nhap dung roi \n"); 
		} 
	return 0; 
} 
   
