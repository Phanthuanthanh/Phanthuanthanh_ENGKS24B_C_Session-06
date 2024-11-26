#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c, delta;
	float x1, x2, x;
	printf("Nhap vao 3 so: \n");
	scanf("%d %d %d",&a, &b, &c);
	if(a == 0){
		printf("Phuong trinh bac nhat");
	}else{
		delta = b * b - 4 * (a * c);
		if(delta < 0){
			printf("phuong trinh vo nghiem");
		}else if(delta > 0){
			x1=(-b + sqrt(delta))/(2 * a);
			x2=(-b - sqrt(delta))/(2 * a);
			printf("phuong trinh co 2 nghiem phan biet \n");
			printf("x1 = %.1f\n",x1);
			printf("x2 = %.1f",x2);
		}else{
			x=-b / (2 * a);
			printf("phuong trinh co nghiem kep\n");
			printf("x = %.1f",x);
			
		}
	}
	
	return 0;
}
