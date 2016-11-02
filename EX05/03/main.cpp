#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
	vector<int> v1 = vector<int>(5, 10);
	vector<int> v2 = vector<int>(5, 20);

	// test checking size
	cout << "vector length is: " << v1.size() << endl;
	cout << "vector length is: " << v2.size() << endl;

	// test push_back()
	v1.push_back(1);
	cout << "The last element is: " 
		<< v1.at(v1.getLength()-1) << endl;

	// test pop_back()
	v1.pop_back();
	cout << "The last element is now: " 
		<< v1.at(v1.getLength()-1) << endl;

	// test isEmpty()
	if (v1.isEmpty())
		cout << "vector isEmpty" << endl;
	else
		cout << "vector isNotEmpty" << endl;
	
	// test swap(vector&)
	cout << "Before:\n";
	cout << "V1: " << v1.at(1) << endl;
	cout << "V2: " << v2.at(1) << endl;
	v1.swap(v2);
	cout << "After:\n";
	cout << "V1: " << v1.at(1) << endl;
	cout << "V2: " << v2.at(1) << endl;

	// test clear()
	cout << "vector length is: " << v1.size() << endl;
	v1.clear();
	cout << "vector length is now: " << v1.size() << endl;

	return 0;
}