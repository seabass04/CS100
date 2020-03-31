#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
using namespace std;

class Mult : public Base {
  private:
    Base* left;
    Base* right;
  public:
    Mult ( Base* lhs, Base* rhs ) { left = lhs; right = rhs; };
    double evaluate() { return left->evaluate() * right->evaluate(); }
    string stringify(){
      string s;
      s = left->stringify() + " * " + right->stringify();
      return s;
    }


};
#endif
