#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include "base.hpp"
#include "Decorator.hpp"

//#include <cmath> 
#include <math.h>
using namespace std;

class Ceil : public Decorator{
	
	public:
	Ceil(){};
	
	Ceil(Base* temp) :Decorator(temp){};
	
	double evaluate()
	{
		return ceil(equation->evaluate());
	}
	
	string stringify()
	{
		return to_string(evaluate());
	}
	
};

#endif