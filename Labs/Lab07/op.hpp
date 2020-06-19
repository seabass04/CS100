#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
using namespace std;

class Op : public Base {
    private:
     double num;
    public:
        Op(double value) { num = value; }
        virtual double evaluate() { return num; }
        virtual std::string stringify() { 
          string s;
          s = to_string(num);
          return s; 
       }
};

class SevenOpMock: public Base {
    public:
        SevenOpMock() { };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
};

class ThreeOpMock: public Base {
    public:
        ThreeOpMock() { };

        virtual double evaluate() { return 3.0; }
        virtual string stringify() { return "3.0"; }
};

class NegThreeOpMock: public Base {
    public:
        NegThreeOpMock() { };
 
        virtual double evaluate() { return -3.0; }
        virtual string stringify() { return "-3.0"; }
};

#endif //__OP_HPP__
