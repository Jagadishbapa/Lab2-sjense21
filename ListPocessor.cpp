// ListProcessor.cpp
//Sidney Jensen Lab2

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "stdafx.h"
#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "number of cows	:	" << cows.size() << endl;
	cout << "sum of cows	:	" << cows.sum() << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl <<endl;
	cout << "number of cows	:	" << cows.size() << endl;
	cout << "sum of cows	:	" << cows.sum() << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "number of horses:	" << horses.size() << endl;
	cout << "sum of horses	:	" << horses.sum() << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "number of cows	:	" << cows.size() << endl;
	cout << "sum of cows	:	" << cows.sum() << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "number of horses:	" << horses.size() << endl;
	cout << "sum of horses	:	" << horses.sum() << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "number of pigs	:	" << pigs.size() << endl;
	cout << "sum of pigs	:	" << pigs.sum() << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "number of pigs	:	" << pigs.size() << endl;
	cout << "sum of pigs	:	" << pigs.sum() << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "number of cows	:	" << cows.size() << endl;
	cout << "number of horses:	" << horses.size() << endl;
	cout << "number of pigs	:	" << pigs.size() << endl;
	cout << "sum of pigs	:	" << pigs.sum() << endl;

	// Testing insertAsLast, first with prvious lists, then with an empty one.
	cows.insertAsLast(2.45);
	pigs.insertAsLast(3.24);
	cout << "cows list  :  " << cows << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "number of cows	:	" << cows.size() << endl;
	cout << "sum of cows:	" << cows.sum() << endl;
	cout << "number of pigs	:	" << pigs.size() << endl;
	cout << "sum of pigs	:	" << pigs.sum() << endl;

	horses.removeFirst();
	horses.insertAsLast(5.23);
	cout << "horses list:  " << horses << endl << endl;
	cout << "number of horses:	" << horses.size() << endl;
	cout << "sum of horses	:	" << horses.sum() << endl;

	cout << "End of code" << endl;

	return 0;
}