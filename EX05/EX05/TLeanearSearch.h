#pragma once
#include <iostream>

template<typename T>
T linearSearch(const T list[], T key, int arraySize)
{
	bool found = false;
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
		{
			cout << "Found: " << list[i] << endl;
			return list[i];
			found = true;
		}
	}
	if (!found)
	{
		cout << key << " Not found in listings" << endl;
	}
	return false;
}