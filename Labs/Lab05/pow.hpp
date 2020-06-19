#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <math.h>

using namespace std;

class Pow : public Base {
    private:
	Base* L;
	Base* R;
    public:
	Pow(Base* left, Base* right)
	{
		L = left;
		R = right;
	}
	double evaluate()
	{
		return pow(L->evaluate(), R->evaluate());
	}
	string stringify()
	{
		string s = L->stringify() + " ** " + R->stringify();
		return s; 
	}    
     
};

#endif //__POW_HPP__
