#ifndef __VECTORCONTAINER_HPP__
#define __VECTORCONTAINER_HPP__

using namespace std;
#include <vector>
#include "container.hpp"
#include "base.hpp"

class VectorContainer : public Container {
   private:
	vector<Base*> vec;
	
   public:
	VectorContainer()
	{
		//vector<Base*> vec;
		sort_function = NULL;
	}
	
	void set_sort_function(Sort* sort_function)
	{
		this->sort_function = sort_function;
	}
   
	void add_element(Base* element)
	{
		vec.push_back(element);
	}
	
	void print()
	{
		for (unsigned i = 0; i < vec.size(); ++i)
		{
			cout << vec.at(i)->stringify() << " ";
		}
		cout << endl;
		
	}
	
	
	void sort()
	{
		if( sort_function == NULL )
		{
			cout << "Sort function not set" << endl;
			return;
		}
		else{
			sort_function->sort(this);
		}
		
	
	}
	
	
	void swap(int i, int j)
	{
		Base* tempbase = vec.at(i);
		
		vec.at(i) = vec.at(j);
		vec.at(j) = tempbase;
	}
	
	Base* at(int i)
	{
		return vec.at(i);
	}
	
	int size()
	{
		return vec.size();
	}
};


#endif
