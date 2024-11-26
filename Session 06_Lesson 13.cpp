#include <stdio.h>

int main() {
    int day, month;

    printf("Nhap ngay sinh: ");
    scanf("%d", &day);  
    printf("Nhap thang sinh: ");
    scanf("%d", &month);  

    if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) {
        printf("Cung hoang dao: Bach Duong (21/3 - 20/4)\n");
    } else if ((month == 4 && day >= 21) || (month == 5 && day <= 20)) {
        printf("Cung hoang dao: Kim Nguu (21/4 - 20/5)\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Cung hoang dao: Song Tu (21/5 - 20/6)\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Cung hoang dao: Cu Giai (21/6 - 22/7)\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Cung hoang dao: Su Tu (23/7 - 22/8)\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Cung hoang dao: Xu Nu (23/8 - 22/9)\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Cung hoang dao: Thien Binh (23/9 - 22/10)\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Cung hoang dao: Bo Cap (23/10 - 21/11)\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Cung hoang dao: Nhan Ma (22/11 - 21/12)\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Cung hoang dao: Ma Ket (22/12 - 19/1)\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Cung hoang dao: Bao Binh (20/1 - 18/2)\n");
    } else{
        printf("Cung hoang dao: Song Ngu (19/2 - 20/3)\n");
    }

    return 0; 
}

