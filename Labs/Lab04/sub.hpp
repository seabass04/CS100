#ifndef _ADD_HPP_
#define __ADD_HPP__

#include "base.hpp"
using namespace std;

class Sub : public Base {
    private:
        Base* L;
        Base* R;
    public:
        Sub(Base* left, Base* right)
        {
                L = left;
                R = right;
        }
        double evaluate()
        {
                return L->evaluate() - R->evaluate();
        }
        string stringify()
        {
                string s = L->stringify() + " - " + R->stringify();
                return s;
        }

};

#endif //__SUB_HPP__
