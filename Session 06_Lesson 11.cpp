#include <stdio.h>

int main(){
	int n, count=0, number=0, prime=2;
	printf("Nhap so luong so nguyen to can in ra: ");
	scanf("%d",&n);
	
	while(number<n){
		count=0;
		for(int i=1; i<=(prime); i++){
			if(prime % i == 0){
				count++;
			}
		}
		if(count==2){
			printf("So nguyen to: %d \n",prime);
			number++;
		}
		prime++;
	}
}
