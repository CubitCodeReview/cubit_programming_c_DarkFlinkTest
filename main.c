#include <stdio.h>

// Напишите тут определение функции discriminant

// ---------------------------------------------

int main(){

	float a, b, c;
	float d;
	scanf("%f %f %f", &a, &b, &c);
	d = discriminant(a, b, c);
	printf("%f\n", d);
	return 0;
}