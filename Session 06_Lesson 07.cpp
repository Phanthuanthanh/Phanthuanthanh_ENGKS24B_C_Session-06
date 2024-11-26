#include <stdio.h>

int main() {
    int num;

    do { 
        printf("Nhap vao mot so nguyen: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Moi ban nhap lai so nguyen duong (num > 0).\n");
        }
    } while(num <= 0);  

    printf("Cac uoc cua %d la: \n", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0){ 
            printf("%d ", i);  
        }
    }

    printf("\n"); 
    return 0;
}
