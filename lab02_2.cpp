#define _USE_MATH_DEFINES
#include <math.h>  
#include <stdio.h>
#include<iostream>

void printarray(double w[], int lim) {
	for (int i = 0; i < lim; ++i) {
		w[i] = 2 * i;
		printf("%d ", i + 1);
		printf("%f\n", w[i]);
	}
}

int main(void) {
	int lim = 1, i = 0;
	printf("vvedite predel: \n");
	scanf_s("%d", &lim);
	double* w = (double*)malloc(lim * sizeof(double));
	printarray(w, lim);
	system("pause");
}
