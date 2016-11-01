#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
	vector<int> v1 = vector<int>(5);
	vector<int> v2 = vector<int>(5);

	cout << v1.size() << endl;
	cout << v2.size() << endl;

	//v1.push_back(1);
	v1.push_back(2);
	//v1.push_back(3);

	//cout << v1.at(1) << endl;
	return 0;
}