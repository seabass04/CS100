#ifndef __PAREN_HPP__
#define __PAREN_HPP__


#include "base.hpp"
#include "Decorator.hpp"
 
#include <cmath>
using namespace std;

class Paren : public Decorator{
	
	public:
	Paren(){};
	
	Paren(Base* temp) :Decorator(temp){};
	
	double evaluate()
	{
		return equation->evaluate();
	}
	
	string stringify()
	{
		return "("+(equation->stringify()) + ")";
	}
	
};

#endif //__PAREN_HPP__