#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("nhap a: ");
	scanf("%d, &a");
	int b;
	printf("nhap b: ");
	scanf("%d, &b");
	
	int sum;
	sum = a + b;
	printf("sum is %d\n", sum);
	
	return 0;
}
