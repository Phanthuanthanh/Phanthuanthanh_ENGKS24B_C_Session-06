#include<stdio.h>

int main(){
    int num, le = 0, chan = 0;  

    printf("Nhap vao 5 so nguyen: \n");
    for (int i = 1; i < 6; i++){
        printf("So %d: ",i);
        scanf("%d", &num);
        
		if (num % 2 != 0){  
            le++;     
        }else{
			chan++; 
		}
    }
    printf("So luong cac so le: %d\n",le);
    printf("So luong cac so chan: %d\n",chan);
	return 0;
}

