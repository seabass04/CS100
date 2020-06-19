#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include "base.hpp"
#include "Decorator.hpp"
#include <math.h>
using namespace std;

class Trunc : public Decorator{
	
	public:
	Trunc(){};
	Trunc(Base* temp):Decorator(temp){};
	
	double evaluate()
	{
		return equation->evaluate();
	}
	
	string stringify()
	{
		return to_string(evaluate());
	}
	
	
};

#endif