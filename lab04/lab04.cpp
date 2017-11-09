#include<stdio.h>
#include<iostream>


#include<iostream>

void fibarray(int *fib, int len)
{
	if (len < 3)
	{
		printf("Error! Length must be > 2!");
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			if (i < 2)
				fib[i] = i;
			else
				fib[i] = fib[i - 1] + fib[i - 2];
		}
	}
}

void printarray(int *x, int len)
{
	int count = 0;
	while (count < len)
	{
		int i = *x;
		printf("%d ", i);
		x += 1;
		++count;
	}
	printf("\n");
}

int search_i(int *x, int len, int number)
{
	for (int i = 0; i < len; ++i)
	{
		if (x[i] == number)
			return i;
	}
	return -1;
}

int search_r(int *x, int len, int number)
{
	if (*(x + len - 1) == number)
		return len - 1;
	//int a = *x + len - 1;
	if (len - 1 != -1)
		search_r(x, len - 1, number);
	else return -1;
}

const char *strchar(const char *src, char ch)
{
	while (*src != '\0')
	{
		if (*src == ch)
			return src;
		else src += 1;
	}
	return NULL;
}


int main(void) {
	// Работа с цифровыми массивами:

	int *mass;
	int size = 0, search_num;
	while (size <= 2)
	{
		printf("\nWrite the size of your mass: ");
		scanf_s("%d", &size);
		mass = (int *)malloc(size * sizeof(int));
		fibarray(mass, size);
	}

	printf("Your mass:");
	printarray(mass, size);

	printf("Write number you want to find (recursive):");
	scanf_s("%d", &search_num);
	search_num = search_r(mass, size, search_num);
	printf("Position of this number: %d\n", search_num);

	printf("Write number you want to find (iterative):");
	scanf_s("%d", &search_num);
	search_num = search_i(mass, size, search_num);
	printf("Position of this number: %d\n", search_num);

	// Работа со строками

	char *ch_mass;
	int ch_size = 15;
	char search_ch;

	ch_mass = (char *)malloc(15 * sizeof(char));
	
	printf("Your string(14 symbols): ");
	for (int i = 0; i < 15; ++i) {
		scanf_s("%c", &ch_mass[i]);
	}
	

	printf("The symbol you wanna find: ");
	scanf_s("%c", &search_ch);

	const char *s = strchar(ch_mass, search_ch);
	if (s == NULL)
		printf("There is no such letter in your string!");
	else
		printf("This letter is in your string!");
	system("pause");
}
