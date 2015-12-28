#ifndef _container_
#define _container_

#include <iostream>
using namespace std;

class SortAlgorithm;


class Container{
protected:
	SortAlgorithm* algorithm;

public:
	vector<int> userVector;
	virtual int at(int i) = 0;
	virtual void swap(int i, int j) = 0;
	virtual void insert(int element) = 0;
	virtual void print() = 0;
	virtual int size() = 0;
	virtual void set_sort(SortAlgorithm* s) = 0;
	virtual void sort() = 0;




};
#endif
