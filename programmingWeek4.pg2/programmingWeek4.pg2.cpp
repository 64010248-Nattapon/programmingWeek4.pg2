#include<stdio.h>
#include<math.h>

int main() {
	
	printf("Enter three number : ");
	float x[4];
	scanf_s("%f %f %f",&x[0],&x[1],&x[2]);
	if (x[0] > 0 && x[1] > 0 && x[2] > 0 && x[0] + x[1] > x[2] && x[0] + x[2] > x[1] && x[1] + x[2] > x[0]) {
		x[3] = (x[0] + x[1] + x[2]) / 2.0;
		x[4] = sqrt(x[3] * (x[3] - x[0]) * (x[3] - x[1]) * (x[3] - x[2]));
		printf("Area of triangle is : %.2f", x[4]);
	}
	else  printf(" 0 ");
	return 0;
}