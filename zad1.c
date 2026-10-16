#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	nom1();
	nom1A();
	nom1B();
	nom1V();
	nom2();
	nom3();
	dz();
}

int nom1()
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 7e-4; // 0.0007
	printf("%.15lf", d);
	printf("%c, %i, %.2f, %g\n", c, i, f, d);
	char c1;
	int i1;
	float f1;
	double d1;
	puts("введите значение с:");
	scanf("%c", &c1);
	puts("введите значение i:");
	scanf("%d", &i1);
	puts("введите значение f:");
	scanf("%f", &f1);
	puts("введите значение d:");
	scanf("%lf", &d1);
	printf("%c, %d, %.2f, %g\n", c1, i1, f1, d1);
	return 0;
}
int nom1A() 
{
	double a;
	puts("введите вещественное число:");
	scanf("%lf", &a);
	int a1 = (int)a;
	double a2 = a - a1;
	printf("целая часть числа - %d, дробная часть числа - %g\n", (int)a, a2);
	return 0;
}
int nom1B() 
{
	char h;
	puts("введите символ:");
	scanf("%c", &h);
	printf("в десятичной системе счисления - %d\nв шестнадцатиричой системе счисления - %x\n", h, h);
	return 0;
}
int nom1V() 
{
	int i;
	puts("введите i:");
	scanf("%d", &i);
	printf("1 / %d = %g", i, 1.0 / i);
	return 0;
}
int nom2() 
{
	int a = 11, b = 3;
	int x = a / b;
	float y = a / b;
	double z = a / b;
	printf("x = %d\ny = %f\nz = %f\n", x, y, z);
	printf("(float)a/b = %f\n", (float)a / b);
	printf("(double)a/b = %f\n", (double)a / b);
	printf("(float)(a/b) = %f\n", (float)(a / b));
	return 0;
}

int nom3() 
{
	int n, n1, n2, n3;
	puts("введите трехзначное число n:");
	scanf("%d", &n);
	n1 = n / 100;
	n2 = (n / 10) % 10;
	n3 = n % 10;
	printf("первая цифра числа - %d, вторая цифра числа - %d, третья цфира числа - %d\n", n1, n2, n3);
	printf("сумма цифр числа = %d + %d + %d = %d\n", n1, n2, n3, n1 + n2 + n3);
	printf("число наоборот: %d%d%d\n", n3, n2, n1);
	return 0;
}
int dz()
{
	int a, b, c;
	puts("Введите значеие а:");
	scanf("%d", &a);
	puts("Введите значеие b:");
	scanf("%d", &b);
	puts("Введите значеие c:");
	scanf("%d", &c);
	if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0)
		puts("Реакция запущенна");
	else
		puts("Реакция не запущенна");
	return 0;
}