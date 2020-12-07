#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a, b, c;

	printf("Digite tres números: \n");
	scanf("%f %f %f", &a, &b, &c);

    printf("a + b = %f", a + b);
    printf("a / c = %f", a/c);
    printf("a^2 = %f", pow(a,2));
	printf(" b * c = %f", b * c);
	printf("a * b - c = %f", a * b - c);

	system("pause");
	return 0;
}
