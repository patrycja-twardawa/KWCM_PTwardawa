#pragma once

#include "trygonometria.h"
#include <cmath>
#include <iostream>

int main()
{
	double s = degreemath::Sin(0.0);
	double c = degreemath::Cos(0.0);
	double t = degreemath::Tan(0.0);
	double n = degreemath::Ctn(45.0);

	std::cout << "Test funkcji:" << std::endl;
	std::cout << "Sin: " << s << " " << "Cos: " << c << " " << "Tan: " << t << " " << "Ctg: " << n << std::endl;
	std::cin.get();

	return 0;
}