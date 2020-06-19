#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include <stdio.h>
#include <ctype.h>
#include "op.hpp"
#include <vector>
#include <stack>
#include "base.hpp"
#include "add.hpp"
#include "div.hpp"
#include "pow.hpp"
//#include "sub.hpp"  
#include "mult.hpp" 
#include <stdlib.h>
#include <string>

using namespace std;

class Factory {
	
	private:
	Base* root = nullptr;
	public:
	Factory(){};
	
	
	Base* parse(char** input, int length)
	{
		//cout << "length: " << length << endl;
		if(length == 1)
		{
			//cout << "Error" << endl;
			return nullptr;
		}
		stack<Base*> baseStack;
		for(int i = 1; i < length; ++i)
		{
			//cout << "i is currently: " << input[i][0] << endl;
			if(isdigit(input[i][0]))
			{
				//cout << "a digit" << endl;
				int tempInt = atoi(input[i]);
				Op* tempOp = new Op(tempInt);
				baseStack.push(tempOp);
				root = tempOp;
				//cout << "the digit is: " << input[i][0] << endl;
				//cout << root->stringify() << endl;
			}
			else if(input[i][0] == '+')
			{
				//cout << "a plus sign" << endl;
				int tempInt = atoi(input[i+1]);
				Op* tempOp = new Op(tempInt);
				Add* tempAdd = new Add(baseStack.top(),tempOp);
				baseStack.pop(); 
				baseStack.push(tempAdd);
				root = tempAdd;
				//cout << root->stringify() << endl;
				i+=1;
			}
			else if(input[i][0] == '-')
			{
				//cout << "a minus sign" << endl;
				int tempInt = atoi(input[i+1]);
				Op* tempOp = new Op(tempInt);
				Sub* tempSub = new Sub(baseStack.top(),tempOp);
				baseStack.pop();
				baseStack.push(tempSub);
				root = tempSub;
				//cout << root->stringify() << endl;
				//cout << root->evaluate() << endl;
				i+=1;
			}
			else if(input[i][0] == '*' && input[i][1] == '*' )
			{
				//cout << "a power sign" << endl;
				int tempInt = atoi(input[i+1]);
				Op* tempOp = new Op(tempInt);
				Pow* tempPow = new Pow(baseStack.top(),tempOp);
				baseStack.pop();
				baseStack.push(tempPow);
				root = tempPow;
				//cout << root->stringify() << endl;
				//cout << root->evaluate() << endl;
				i+=1;
			}
			else if(input[i][0] == '/')
			{
				//cout << "a division sign" << endl;
				int tempInt = atoi(input[i+1]);
				Op* tempOp = new Op(tempInt);
				Div* tempDiv = new Div(baseStack.top(),tempOp);
				baseStack.pop();
				baseStack.push(tempDiv);
				root = tempDiv;
				//cout << root->stringify() << endl;
				//cout << root->evaluate() << endl;
				i+=1;
			}
			else if(input[i][0] == '*')
			{
				//cout << "a multiplication sign" << endl;
				int tempInt = atoi(input[i+1]);
				Op* tempOp = new Op(tempInt);
				Mult* tempMult =  new Mult(baseStack.top(),tempOp);
				baseStack.pop();
				baseStack.push(tempMult);
				root = tempMult;
				//cout << root->stringify() << endl;
				//cout << root->evaluate() << endl;
				i+=1;
			}
		}
		
		return root;
	}

	
};

#endif //__FACTORY_HPP__
