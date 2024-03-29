#include <iostream>

#include "base.hpp"
#include "add.hpp"
#include "op.hpp" 
#include "div.hpp"
#include "sub.hpp"  
#include "Rand.hpp" 
#include "mult.hpp" 
#include "container.hpp"
#include "VectorContainer.hpp"
#include "listcontainer.hpp"
#include "bubblesort.hpp"
#include "Ceil.hpp"
//#include "absolute.hpp"
#include "trunc.hpp"
#include "Factory.hpp"
#include <vector>

using namespace std;
int main(int argc, char *argv[]) {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    Base* mult = new Mult(seven, four);
    Base* add = new Add(three, mult);
    Base* minus = new Sub(add, two);
	Factory* factory = new Factory();
	Base* parsed = factory->parse(argv, argc);
	
	if(parsed == nullptr)
		cout << "You entered invalid input"<< endl;
	else
	cout << parsed->stringify() <<" = " << parsed->evaluate()<<endl;

	vector<string> test {"hello", "world"};
	cout << *test.data() << endl;
    //std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    return 0;
}
