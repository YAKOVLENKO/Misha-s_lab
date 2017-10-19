int factorial(int value)
{
	int fact = 1;
	for (int i = 0; i < value; ++i)
		fact *= value - i;
	return fact;
}

double mysin(double x, double eps)
{
	double sin = 0;
	int sign = 1;
	int step = 1;
	double slag = pow(x, step) / factorial(step);;

	while (abs(slag) >= eps)
	{
		sin += slag;
		sign *= -1;
		step += 2;
		slag = sign * pow(x, step) / factorial(step);		
	}
	return sin;
}

int main()
{
	double x = 0, eps = 0;
	printf_s("Write x: ");
	//std::cin >> x;
	scanf_s("%fl", &x);
	printf_s("Write eps: ");
	//std::cin >> eps;
	scanf_s("%fl", &eps);
	printf_s("My sin(x) = %f \nsin(x) = %f", mysin(x, eps), sin(3.14));
	system("pause");
}
