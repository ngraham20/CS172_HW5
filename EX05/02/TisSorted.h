#pragma once

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i < size && i > 0 && list[i] < list[i-1])
		{
			return false;
		}
	}
	return true;
}