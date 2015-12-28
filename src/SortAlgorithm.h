#ifndef _sort_
#define _sort_

#include <iostream>
#include "Container.h"
//#include "VectorContainer.h"

using namespace std;

class SortAlgorithm{
private:

public:
	virtual void sort(Container* c) = 0;
};
#endif
