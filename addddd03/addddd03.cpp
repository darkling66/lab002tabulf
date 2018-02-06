// addddd03.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"
#include "stdlib.h"

//#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '
//
//#define COND1 (x) (x) <= -3.0
//#define FUNC1 (x) (-2 * (x) * (x) * (x) * (x)) + (3 * (x) * (x)) -1
//
//#define COND2 (x) (x)> -3 && (x) < 4.0
//#define FUNC2 (x) (pow((x),4)) - x * abs((x) -1)
//
//// #define COND3 (x) (x) => 4
//#define FUNC3 (x) abs((x) - 2) - (x) + 1
//
//#define FUNC(x) COND1(x) ? FUNC1(x): (COND2(x)) ? FUNC2(x) : FUNC3(x))


int main()
{
	double a = 1.0,c = -3.0, b = 4.0, h1 = 0.15 , h2 = 0.2 , d = 3 ;
	printf("%c\\%c", 'Y', 'X');
	for (double x = a; x <= b; x += h1)
	{
		printf("\t%8.2f",x );
	}
	printf("\n");
	for (double  y = c; y <= d; y += h2)
	{
		printf("%.2f",y );
		for (double x = a; x <= b; x += h1) {
			double z = (pow(x, fabs(y - 3))) / pow((y*y + 2 * x), 1.0 / 3);
			printf("\t%8.2f", z);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	
	return 0;
}