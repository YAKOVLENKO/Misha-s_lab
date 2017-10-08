#define _USE_MATH_DEFINES
#include <math.h>  
#include <stdio.h>
#include<iostream>

void initarray(double w[], int lim) {
	for (int k = 0; k < lim; ++k)
		w[k] = sin(2 * M_PI * k / lim);
}

int main(void) {
	
	 int c = 0, lim = 1;
	printf("vvedite predel: \n");
	scanf_s("%d", &lim);
	double* w;
	w = (double*)malloc(lim * sizeof(double));
	
	initarray(w, lim);
	for(int i = 0; i < lim; ++i)
		printf("massiv: %f \n", w[i]);
	system("pause");


}
