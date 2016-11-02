#include <iostream>
#include <vector>
#include "TShuffle.h"
using namespace std;

int main()
{
	vector<int> v1{ 1,2,3,4,5,6,7,8,9,10 }; // create a vector with easy-to-recognize initial values
	cout << "Before:\n";
	for (int i = 0; i < v1.size(); i++) // print those values
	{
		cout << v1.at(i) << endl;
	}
	shuffle(v1); // shuffle the values around
	cout << "After:\n";
	for (int i = 0; i < v1.size(); i++) // print the values in their new order
	{
		cout << v1.at(i) << endl;
	}
	return 0;
}