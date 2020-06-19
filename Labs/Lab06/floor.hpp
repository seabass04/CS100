#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__


#include "base.hpp"
#include "Decorator.hpp"

//#include <cmath> 
#include <cmath>
using namespace std;

class Floor : public Decorator{
	
	public:
	Floor(){};
	
	Floor(Base* temp) :Decorator(temp){};
	
	double evaluate()
	{
		return floor(equation->evaluate());
	}
	
	string stringify()
	{
		return to_string(evaluate());
	}
	
};

#endif //__FLOOR_HPP__
