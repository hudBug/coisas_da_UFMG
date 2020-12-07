#include<stdio.h>
#include<math.h>

int main(){
    
    int i;
    float f;

    i = 3 + 4;
	printf("3+4 = %d", i);
    f = 7/4;
	printf("7/4 = %f", f);
    i = pow(3,2);
	printf("pow(3,2)= %d", i);
    f = 5.3 * 2.1;
	printf("5.3 * 2.1= %f", f);
    i = 2 * 5 - 2;
	printf("2 * 5 – 2= %d", i);
    i = (2 + 5 ) * 3;
	printf("(2 + 5 ) * 3= %d", i);
    f = sin(3.141502);
	printf("sin(3.141502)= %f", f);
    f= sqrt(5);
	printf("sqrt(5)= %f", f);
    i = 1 + 2 + 3;
	printf("1 + 2 + 3= %d", i);
    i = 1 * 2 * 3;
	printf("1 * 2 * 3= %d", i);
    f = (1 + 2 + 3) / 3.0;
	printf("(1 + 2 + 3) / 3.0= %f", f);
    i = (2 + 4) * (3 - 1);
	printf("(2 + 4) * (3 - 1)= %d ", i);
    f = sin(4.5) + cos(3.7);
	printf("sin(4.5) + cos(3.7) = %f", f);
    f = log(2.3) - log(3.1);
	printf("log(2.3) – log(3.1)= %f", f);
    f = log(7) + (log(7) * log(7) - cos(log(7)));
	printf("log(7) + (log(7) * log(7) - cos(log(7))) = %f", f);
    f = (10.3 + 8.4) / 50.3 - (10.3 + 8.4);
	printf("(10.3 + 8.4) / 50.3 – (10.3 + 8.4) = %f", f);
    f = (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8));
	printf("(cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)) = %f", f); 
	return 0;
}
