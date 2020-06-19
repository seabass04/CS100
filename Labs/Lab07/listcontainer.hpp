#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include <vector>
#include "container.hpp"
#include "base.hpp"
#include <iostream>
#include "selectionSort.hpp"
#include <list>

using namespace std;

class Sort;
class SelectionSort;

class ListContainer : public Container {
	
	protected:
		list<Base*> data;
	public:
		ListContainer(){};
		void sort()
		{
			 if( sort_function == NULL )
			{
				cout << "Sort function not set" << endl;
				return;
			}
			else
			{
				sort_function->sort(this);
			}
		}
		
		void set_sort_function(Sort* sort_function)
		{
			this->sort_function = sort_function;
		}
		
		void add_element(Base* element)
		{
			data.push_back(element);
		}
		
		void print()
		{
			list<Base*>::iterator it;
			for(it = data.begin(); it != data.end(); it++) 
			{
				Base* value = *it;
				cout << value->evaluate() << endl;
			}
		}
		
		void swap(int i,int j)
		{
			list<Base*>::iterator iter1 = data.begin();
			advance(iter1,i);

			list<Base*>::iterator iter2 = data.begin();
			advance(iter2,j);

			std::swap(*iter1,*iter2);
		}
		
		Base* at(int i)
		{
			list<Base*>::iterator it = data.begin();
			advance(it,i);
			return *it;	
		}
		
		int size()
		{
			return data.size();
		}

};

#endif