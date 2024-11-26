#include <stdio.h>

int main() {
    int num, sum = 0;  

    printf("Nhap vao 5 so nguyen: \n");
    for (int i = 1; i < 6; i++){
        printf("So %d: ",i);
        scanf("%d", &num);
        
		if (num % 2 != 0) {  
            sum += num;     
        }
    }
    printf("Tong cac so le: %d\n",sum);
	return 0;
}

