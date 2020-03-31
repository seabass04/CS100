#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <stdlib.h>
using namespace std;

class Rand : public Base {
   private:
     double n = rand() % 100;
   public: 
     Rand() { };
     double evaluate() { return n; };
     string stringify(){
       string s;
       s = to_string(n);
       return s;
     }
};

#endif
