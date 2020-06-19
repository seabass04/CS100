#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__

#include "container.hpp"

class Container;
class ListContainer;
class SelectionSort : public Sort {
    public:
	SelectionSort(){};
	void sort(Container* container)
	{

		int minimumIndex;	
		int length = container->size();
		for (int i = length -1 ; i>0;i--)
		{
			minimumIndex = 0;
			for(int j = 1; j <= i ; ++j)
			{
				if(container->at(j)->evaluate() > container->at(minimumIndex)->evaluate())
				minimumIndex = j;
			}
			container->swap(minimumIndex , i);
		}
	};
	
};

#endif //__SELECTIONSORT_HPP__