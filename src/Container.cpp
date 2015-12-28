//Lab 7
//abstract base class Container
#ifndef _list_
#define _list_
#include <iostream>
#include <list>

#include "Container.h"
#include "SortAlgorithm.h"


using namespace std;

class ListContainer : public Container{
    list<int> l;
    public:
        string name;
        ListContainer(list<int> lis){
            l = lis;
            name = "list";	
        }	
        ListContainer(){
	    name = "list";
        }
    	
        int at(int i){
            if(i >= l.size())
                return -1;
            int val;
         	   int y = 0;
            for(auto it = l.begin(); i != y; it++){
                val = *it;
                y++;   
            }
            return val;
     	   }
 	
        void swap(int i, int j){
            if(i==j || i > l.size() || j > l.size() || i<0 || j<0 )
                return;
            auto it = l.begin();
            auto it2 = l.begin();
            for(int x = 0; it != l.end(); x++)
        	 it++;
            for(int y = 0; it2 != l.end(); y++)
                it2++;
            int temp = *it2;
            *it2 = *it;
            *it = temp; 
        }   

    void insert(int element){
        l.push_back(element); 
    }

    void print(){
        //sort();
        for(auto it = l.begin(); it != l.end(); it++){
            cout << *it << " ";
        }
	cout << endl;
    }
   
    int size(){
       return l.size();
    }

    void set_sort(SortAlgorithm* s){
        algorithm = s;   
    }

    void sort(){
        for(auto it = l.begin(); it != l.end(); it++)
            userVector.push_back(*it);
        algorithm->sort(this);        
        l.clear();
        for(unsigned i = 0; i < userVector.size(); i++)
            l.push_back(userVector[i]);
        userVector.clear();
    }
};
#endif
