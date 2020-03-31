#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
using namespace std;

class Div : public Base {
  private:
    Base* left;
    Base* right;
  public:
    Div ( Base* lhs, Base* rhs ) { left = lhs; right = rhs; }
    double evaluate() { return left->evaluate() / right->evaluate(); }
    string stringify(){
      string s;
      s = left->stringify() + " / " + right->stringify();
      return s;
    }
};
#endif

