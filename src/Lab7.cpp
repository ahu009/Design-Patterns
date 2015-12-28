#include <iostream>

//#include "Container.h"
#include "VectorContainer.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "Container.cpp"
#include "MergeSort.h"
using namespace std;

int main(){
	//=================Bubble Sort==========================
	cout << "=================Bubble Sort==========================" << endl;
	VectorContainer test;
	BubbleSortAlgorithm* bsort = new BubbleSortAlgorithm();
	SelectionSortAlgorithm* ssort = new SelectionSortAlgorithm();
	MergeSortAlgorithm* msort = new MergeSortAlgorithm();
	test.insert(5);
	test.insert(3);
	test.insert(9);
	test.insert(1);
	test.insert(7);
	test.set_sort(bsort);
	cout << "Vector Sort: " << endl;
	cout << "Before sort: " << endl;
	test.print();
	test.sort();
	
	cout << "After sort: " << endl;
	test.print();

	cout << "\nList Sort: " << endl;

	list<int> l;
	ListContainer test1(l);
	test1.insert(5);
	test1.insert(3);
	test1.insert(9);
	test1.insert(1);
	test1.insert(7);
	test1.set_sort(bsort);
	cout << "Before Sort: " << endl;
	test1.print();
	test1.sort();
	cout << "After Sort: " << endl;
	test1.print();
	//=================Bubble Sort==========================




	//=================Selection Sort==========================
	cout << "=================Selection Sort==========================" << endl;
	cout << "Vector sort: " << endl;
	VectorContainer test3;
	test3.insert(5);
	test3.insert(3);
	test3.insert(9);
	test3.insert(1);
	test3.insert(7);
	test3.set_sort(ssort);
	cout << "Before Sort: " << endl;
	test3.print();
	test3.sort();
	cout << "After Sort: " << endl;
	test3.print();

	cout << "\nList Sort: " << endl;
	
	list<int> l2;
	ListContainer test4(l2);
	test4.insert(5);
	test4.insert(3);
	test4.insert(9);
	test4.insert(1);
	test4.insert(7);
	test4.set_sort(ssort);
	cout << "Before Sort: " << endl;
	test4.print();
	test4.sort();
	cout << "After Sort: " << endl;
	test4.print();
	//=================Selection Sort==========================






	//=================Merge Sort==========================
	cout << "=================Merge Sort==========================" << endl;
	cout << "Vector Sort: " << endl;
	VectorContainer test5;
	test5.insert(5);
	test5.insert(3);
	test5.insert(9);
	test5.insert(1);
	test5.insert(7);
	test5.set_sort(msort);
	cout << "Before Sort: " << endl;
	test5.print();
	test5.sort();
	cout << "After Sort: " << endl;
	test5.print();

	cout << "\nList Sort: " << endl;
	list<int> l3;
	ListContainer test6(l3);
	test6.insert(5);
	test6.insert(3);
	test6.insert(9);
	test6.insert(1);
	test6.insert(7);
	test6.set_sort(ssort);
	cout << "Before Sort: " << endl;
	test6.print();
	test6.sort();
	cout << "After Sort: " << endl;
	test6.print();
	//=================Merge Sort==========================




	

	return 0;
}
