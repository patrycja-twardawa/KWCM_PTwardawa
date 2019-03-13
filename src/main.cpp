#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Lab1Config.h"

//#define USE_TRIGONOMETRY_DEGREE

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <cmath>
#endif

int main()
{
#ifdef USE_TRIGONOMETRY_DEGREE
	double s = degreemath::Sin(90.0);
	double c = degreemath::Cos(0.0);
	double t = degreemath::Tan(45.0);
	double n = degreemath::Ctn(45.0);
# else
	double s = sin(M_PI/4.0);
	double c = cos(M_PI/4.0);
	double t = tan(M_PI/4.0);
	double n = 1/tan(M_PI/4.0);
# endif

	std::cout << "Test funkcji:" << std::endl;
	std::cout << "Sin: " << s << " " << "Cos: " << c << " " << "Tan: " << t << " " << "Ctg: " << n << std::endl;
	std::cin.get();

	return 0;
}