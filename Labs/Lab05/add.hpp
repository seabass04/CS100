#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include "op.hpp"
using namespace std;

class Add : public Base {
    private:
	Base* L;
	Base* R;
    public:
	Add(Base* left, Base* right)
	{
		L = left;
		R = right;
	}
	double evaluate()
	{
		return L->evaluate() + R->evaluate();
	}
	string stringify()
	{
		string s = L->stringify() + " + " + R->stringify();
		return s; 
	}    
     
};

/*class SevenThreeAddMock: public Base {
    public:
        SevenThreeAddMock(SevenOpMock.evaluate(), ThreeOpMock.evaluate()) { };

         double evaluate() { return 10.0; }
         string stringify() { return "10.0"; }
};*/




#endif //__ADD_HPP__
