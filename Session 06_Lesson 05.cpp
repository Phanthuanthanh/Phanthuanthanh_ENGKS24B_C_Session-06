#include <stdio.h>
int main(){
	int day, month, year;
	printf("nhap nam: ");
	scanf("%d",&year);
	printf("nhap thang: ");
	scanf("%d",&month);
	
	if(year%4==0 && year%100!=0 || year%400==0){
		switch(month){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf("thang %d co 31 ngay", month);
			break;
			
			case 4: case 6: case 9: case 11:
				printf("thang %d co 30 ngay",month);
			break; 
			
			case 2:
				printf("thang 2 co 29 ngay");
				break;
			
			default:
				printf("thang khong hop le");
				break;
		}
	}else{
		switch(month){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf("thang %d co 31 ngay", month);
			break;
			
			case 4: case 6: case 9: case 11:
				printf("thang %d co 30 ngay",month);
			break; 
			
			case 2:
				printf("thang 2 co 28 ngay");
				break;
			
			default:
				printf("thang khong hop le");
				break;
		}
	}
}
