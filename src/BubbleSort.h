#ifndef _bsort_
#define _bsort_

#include <iostream>
#include <vector>
#include "Container.h"
#include "SortAlgorithm.h"

using namespace std;

class BubbleSortAlgorithm: public SortAlgorithm{
	private:
		
	public:
		virtual void sort(Container* c){
			bool swap = true;
			//cout << "Sorting.." << endl;
			while(swap){

				swap = false;
				for(int i = 0; i < c->userVector.size() - 1; i++){
					if(c->userVector.at(i) > c->userVector.at(i+1)){
						
						c->userVector.at(i) += c->userVector.at(i+1);
						c->userVector.at(i+1) = c->userVector.at(i) - c->userVector.at(i+1);			
						c->userVector.at(i) -= c->userVector.at(i+1);
						swap = true;
					}
				}
			
			}
			//cout << "done" << endl;
			return;
		}
};
#endif

