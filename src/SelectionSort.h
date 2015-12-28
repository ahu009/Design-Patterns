#ifndef _ssort_
#define _ssort_

#include <iostream>
#include "Container.h"

class SelectionSortAlgorithm: public SortAlgorithm{
private:

public:
	virtual void sort(Container* c){
		int small;
		int temp;
		for(int i = 0; i < c->userVector.size(); i++){
			small = i;
			for(int j = i + 1; j < c->userVector.size(); j++){
				if(c->userVector.at(j)  < c->userVector.at(small)){
					small = j;
				} 
			} 
			temp = c->userVector.at(small);
			c->userVector.at(small) = c->userVector.at(i);
			c->userVector.at(i) = temp;
		}
		

	}
};
#endif
