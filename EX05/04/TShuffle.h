#pragma once
#include <vector>
#include <ctime>

using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
	srand(time(NULL)); // initialize the randomizer to time
	// create temp
	T* temp = new T[v.size()];
	// fill temp with v
	for (int i = 0; i < v.size(); i++) // fill the temp with v
	{
		temp[i] = v.at(i);
	}

	// refill v with temp at random
	int vectorSize = v.size(); // set variables to controll the while loop
	int count = 0;
	while (vectorSize > 0)
	{
		int randomNumber = rand() % v.size(); // random temp location
		if (temp[randomNumber] != NULL)
		{
			v.at(count) = temp[randomNumber]; // set each sequential value of v to a random remaining entry from temp
			temp[randomNumber] = NULL;
			
			// controll the while loop
			vectorSize--;
			count++;
		}
	}
}