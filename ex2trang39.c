#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char abc;
	printf("nhap gtri cua abc: ");
	scanf("%c", &abc);
	int xyz;
	printf("nhap gtri cua xyz: ");
	scanf("%d", &xyz);
	float length;
	printf("nhap gtri cua length: ");
	scanf("%f", &length);
	double area;
	printf("nhapgtri cua area: ");
	scanf("%lf", &area);
	
	printf("gia tri char vua nhap la: %c \n", abc);
	printf("gia tri int vua nhap la: %d \n", xyz);
	printf("gia tri float vua nhap la: %f \n", length);
	printf("gia tri double vua nhap la: %lf \n", area);
	return 0;
}
