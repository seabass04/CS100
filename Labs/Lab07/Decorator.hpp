#ifndef __DECORATOR_HPP
#define __DECORATOR_HPP

using namespace std;

class Decorator : public Base{
	
	protected:
	Base* equation;
   public: 
	Decorator(){};
	Decorator(Base* equation)
	{
		this->equation = equation;
	}
	
	virtual double evaluate() = 0;
	virtual std::string stringify() = 0;
	
};


#endif
