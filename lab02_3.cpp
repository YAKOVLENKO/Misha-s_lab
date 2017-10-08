#define _USE_MATH_DEFINES
#include <math.h>  
#include <stdio.h>
#include<iostream>

double average(double w[], int lim) {
	int sum = 0, s = 0;
	for (int i = 0; i < lim; ++i) {
		w[i] = 2 * i;
		sum = sum + w[i];
	}
	return s = sum/lim;
}
int main(void) {
	int lim=1;
	printf("vvedite predel: \n");
	scanf_s("%d", &lim);
	double* w = (double*)malloc(lim * sizeof(double));
	printf("srednee arifm: %f", average(w, lim));
	system("pause");
}
