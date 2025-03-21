﻿// A simple program that computes the square root of a number
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include "MathFunctions.h"



int main(int argc, char* argv[])
{
	if (argc < 2) {
		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		return 1;
	}

	// convert input to double
	const double inputValue = atof(argv[1]);


	const double outputValue = mathfunctions::sqrt(inputValue);


	std::cout << "The square root of " << inputValue << " is " << outputValue
		<< std::endl;
	return 0;
}