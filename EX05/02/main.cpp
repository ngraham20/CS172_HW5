#include <iostream>
#include "TisSorted.h"
#include <string>
using namespace std;

int main()
{
	constexpr int length = 5;
	int ilist[length]{ 1,2,3,4,5 };
	double dlist[length]{ 1.0,2.0,6.0,4.0,5.0 };
	string slist[length]{ "abc","def","ghi","jkl","mno" };
	cout << isSorted(ilist, length) << endl;
	cout << isSorted(dlist, length) << endl;
	cout << isSorted(slist, length) << endl;
	return 0;
}