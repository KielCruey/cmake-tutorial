#include <iostream>

#include "maths.hpp"

namespace math {
	double add(double a, double b){
		return a + b;
	}

	double subtract(double a, double b){
		return a - b;
	}

	double multiply(double a, double b){
		return a * b;
	}

	double divide(double a, double b){
		if(b == 0){
			std::cerr << "Error: Division by zero." << std::endl;
			return 0; // or handle error as appropriate
		}

		return a / b;
	}
}