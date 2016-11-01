#include <iostream>
#include <string>
#include "TLeanearSearch.h"
using namespace std;

int main()
{
	string sinput = "ghi";
	constexpr int length = 5;
	int ilist[length]{ 1,2,3,4,5 };
	double dlist[length]{ 1.0,2.0,3.0,4.0,5.0 };
	string slist[length]{ "abc","def","ghi","jkl","mno" };
	linearSearch(ilist, 3, 5);
	linearSearch(dlist, 1.0, 5);
	linearSearch(slist, sinput, 5);
	linearSearch(ilist, 6, 5);
	return 0;
}