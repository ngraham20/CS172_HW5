#pragma once

template<typename T>
class vector
{
public:

	vector(); // default constructor
	vector(int); // constructor with size (This one is not helpful)
	vector(int, T); // constructor with size and initial values
	~vector(); // destructor

	void push_back(T); // adds a value to the end of the vector
	void pop_back(); // removes the last value from the vector

	int size() const; // returns the vector size
	T at(int); // returns a value at a given location
	bool isEmpty() const; // returns true if the vector is empty
	void clear(); // empties the vector
	void swap(vector&); // swaps the values of a vector with another vector

	int getLength(); // returns the length of a vector

private:
	T* vectorArray; // defines the vector array
	int vectorSize; // defines the vector size
};

template<typename T>
inline vector<T>::vector() // creates a vector with NULL value and no size
{
	vectorArray = NULL;
	vectorSize = 0;
}

// there is no good default to use here that would work with all GenericTypes
template<typename T>
inline vector<T>::vector(int size) 
{
	this->vectorSize = size;
	vectorArray = new T[size];
}

template<typename T> // creates a vector with size and values
inline vector<T>::vector(int size, T type) 
{
	this->vectorSize = size;
	vectorArray = new T[size];
	for (int i = 0; i < size; i++)
	{
		vectorArray[i] = type;
	}
}

template<typename T>
inline vector<T>::~vector() { delete[] vectorArray; } // deletes the memory for vectorArray

template<typename T>
inline void vector<T>::push_back(T newValue)
{
	vectorSize += 1; // increases vectorsize
	T* temp = new T[vectorSize];
	temp[vectorSize - 1] = newValue;
	if (vectorArray != NULL) { // checks for NULL value
		for (int i = 0; i < vectorSize - 1; i++) // fills temp with vectorArray
		{
			temp[i] = vectorArray[i];
		}
		delete[] vectorArray; // removes vector memory
	}
	vectorArray = temp; // tells vectorArray to point to temp
}

template<typename T>
inline void vector<T>::pop_back()
{
	vectorSize -= 1; // decreases vectorSize
	T* temp = new T[vectorSize];
	for (int i = 0; i < vectorSize; i++)
	{
		temp[i] = vectorArray[i]; // fills temp with all but the last value of vectorArray
	}
	vectorArray = temp; // tells vectorArray to point to temp
}

template<typename T>
inline int vector<T>::size() const { return vectorSize; }

template<typename T>
inline T vector<T>::at(int location) { return vectorArray[location]; }

template<typename T>
inline bool vector<T>::isEmpty() const // simple vectorSize check to see if the vector is empty
{
	if (vectorSize > 0)
	{
		return false;
	}
	return true;
}

template<typename T>
inline void vector<T>::clear() // nullifies the vector
{
	vectorSize = 0;
	vectorArray = NULL;
}

template<typename T>
inline void vector<T>::swap(vector& v2)
{
	int size2 = v2.size();
	if (vectorSize >= size2)
	{
		// create temp
		T* temp = new T[vectorSize];
		// fill temp with v1
		for (int i = 0; i < vectorSize; i++)
		{
			temp[i] = vectorArray[i];
		}
		// delete v1
		delete[] vectorArray;
		// fill v1 with v2
		for (int i = 0; i < size2; i++)
		{
			vectorArray[i] = v2.vectorArray[i];
		}
		// delete v2
		delete[] v2.vectorArray;
		// tell v2 to point to temp instead
		v2.vectorArray = temp;
	}
	else
	{
		// create temp
		T* temp = new T[size2];
		// fill temp with v2
		for (int i = 0; i < size2; i++)
		{
			temp[i] = v2.vectorArray[i];
		}
		// delete v2
		delete[] v2.vectorArray;
		// fill v2 with v1
		for (int i = 0; i < vectorSize; i++)
		{
			v2.vectorArray[i] = vectorArray[i];
		}
		// delete v1
		delete[] vectorArray;
		// tell v1 to point to temp instead
		vectorArray = temp;
	}
}

template<typename T>
inline int vector<T>::getLength() { return vectorSize; }
