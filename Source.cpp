#include <stdio.h>
#include<iostream>
#include <math.h>

int sign(double x) {
	if (x > 0) return 1;
	if (x < 0) return -1;
	if (x == 0) return 0;
}

double absvalue(double x) {
	return x * (double)sign(x);
}

double max2(double x, double y) {
	if (x > y) return x;
	else return y;
}

double max3(double x, double y, double z) {  // можно написать  max2(max2(x, y), z);
	if ((x >= y) && (x >= z)) return x;
	if ((y >= x) && (y >= z)) return y;
	if ((z >= y) && (z >= x)) return z;
}

double calc(double x, char op, double y) {
	if (op == '+') return x + y;
	if (op == '/') return x / y;
	if (op == '-') return x - y;
	if (op == '*') return x * y;
	if (op == '#') return pow(x,y);
	return 0;
}

int sumN(int start, int end) {
	int sum = 0;
	for (int i = 0; i <= end - start; ++i)
		sum = sum + start + i;
	return sum;
}

int main(void) {
	int x = 0, y = 0, s = 0, z = 0, start, end;
	double n = 0;
	char op = 0;
	printf("function sign: vvedite chislo\n");
	scanf_s("%i", &x);
	s = sign(x);
	printf("sign(x) = %i \n", s);
	
	printf("function absvalue: vvedite chislo\n");
	scanf_s("%i", &x);
	n = absvalue(x);
	printf("absvalue(x) = %f \n", n);

	printf("function max2: vvedite chislo\n");
	scanf_s("%i %i", &x, &y);
	n = max2(x, y);
	printf("max2(x) = %f \n", n);

	printf("function max3: vvedite chislo\n");
	scanf_s("%i %i %i", &x, &y, &z);
	n = max3(x, y, z);
	printf("max2(x) = %f \n", n);

	printf("function calc: vvedite chislo\n");
	scanf_s("%i\n%ch\n", &x, &op);
	scanf_s("%i", &y);
	n = calc(x, op, y);
	printf("calc(x, op, y) = %f\n", n);

	printf("function sumN: vvedite chislo\n");
	scanf_s("%i %i", &start, &end);
	s = sumN(start, end);
	printf("sumN = %i\n", s);

	system("pause");
}
