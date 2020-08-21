#include<stdio.h>
int main() {
	float base,height,area;
	printf("Enter Base and Height : ");
	scanf_s("%f %f",&base,&height);
	area = (base*height)/2;
	printf("Area = %.2f",area);
	return 0;
}