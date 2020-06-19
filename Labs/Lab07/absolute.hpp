#ifndef __ABSOLUTE_HPP__
#define __ABSOLUTE_HPP__

#include "base.hpp"
#include "Decorator.hpp"

#include <math.h>
using namespace std;

class Absolute : public Decorator{

	public:
	Absolute();
	Absolute(Base* temp):Decorator(temp){};
	
	double evaluate()
	{
		return abs(equation->evaluate());
	}
	
	string stringify()
	{
		return to_string(abs(evaluate()));
	}
	
};
	
#endif
