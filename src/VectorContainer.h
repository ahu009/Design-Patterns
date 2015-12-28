#ifndef _vectorcontainer_
#define _vectorcontainer_

#include <iostream>
#include <vector>
#include "Container.h"
#include "SortAlgorithm.h"

using namespace std;

class VectorContainer: public Container{
private: 
public: 
	
	string name;

	VectorContainer(){
		name = "vector";
	}
	void push_back(int element){
		userVector.push_back(element);
	}
	virtual int at(int i){
		return userVector.at(i);
	}
	virtual void swap(int i, int j){
		int temp = userVector.at(i);
		userVector.at(i) = userVector.at(j);
		userVector.at(j) = temp;
		return;
	}
	virtual void insert(int element){
		userVector.push_back(element);
	}
	virtual void print(){
		for(int i = 0; i < userVector.size(); i++){
			cout << userVector.at(i) << " ";
		}
		cout << endl;
	}
	virtual int size(){
		//cout << userVector.size(); //prints size; rm if needed
		return userVector.size();
	}
	virtual void set_sort(SortAlgorithm* s){
		algorithm = s;
	}
	virtual void sort(){
		//cout << "asdasd" << endl;
		algorithm->sort(this); //may need to correct syntax
	}
};
#endif
