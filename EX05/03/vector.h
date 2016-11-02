#pragma once

template<typename T>
class vector
{
public:
	
	vector();
	vector(int);
	vector(int, T);
	~vector();

	void push_back(T);
	void pop_back();

	int size() const;
	T at(int);
	bool isEmpty() const;
	void clear();
	void swap(vector&);

	int getLength();
	T* getVector();

private:
	T* vectorArray;
	int vectorSize;
};

template<typename T>
inline vector<T>::vector()
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

template<typename T>
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
inline vector<T>::~vector() { delete[] vectorArray; }

template<typename T>
inline void vector<T>::push_back(T newValue)
{
	vectorSize += 1;	T* temp = new T[vectorSize];	temp[vectorSize - 1] = newValue;	if (vectorArray != NULL) {		for (int i = 0; i < vectorSize - 1; i++)		{			temp[i] = vectorArray[i];		}		delete[] vectorArray;	}	vectorArray = temp;
	/*for (int i = 0; i < vectorSize; i++) // this code is used for testing purposes
	{
		cout << vectorArray[i] << endl;
	}*/
}

template<typename T>
inline void vector<T>::pop_back()
{
	vectorSize -= 1;
	T* temp = new T[vectorSize];
	for (int i = 0; i < vectorSize; i++)
	{
		temp[i] = vectorArray[i];
	}
	vectorArray = temp;
}

template<typename T>
inline int vector<T>::size() const { return vectorSize; }

template<typename T>
inline T vector<T>::at(int location) { return vectorArray[location]; }

template<typename T>
inline bool vector<T>::isEmpty() const
{
	if (vectorSize > 0)
	{
		return false;
	}
	return true;
}

template<typename T>
inline void vector<T>::clear()
{
	vectorSize = 0;
	T* temp = new T[vectorSize];
	vectorArray = temp;
}

template<typename T>
inline void vector<T>::swap(vector& v2)
{
	int size2 = v2.size();
	if (vectorSize >= size2)
	{
		T* temp = new T[vectorSize];
		// fill temp with vectorArray
		for (int i = 0; i < vectorSize; i++)
		{
			temp[i] = vectorArray[i];
		}
		// delete vectorArray
		delete[] vectorArray;

		// fill vectorArray with v2
		vectorArray = v2.getVector();

		// clear v2
		v2.~vector();

		// fill v2 with temp
		
	}
	else
	{
		T* temp = new T[size2];
		for (int i = 0; i < size2; i++)
		{
			temp[i] = v2.at(i);
		}
		for (int i = 0; i < size2; i++)
		{
			cout << temp[i] << endl;
		}
		// v2.clear();
		for (int i = 0; i < vectorSize; i++)
		{
			v2.push_back(vectorArray[i]);
		}
		vectorArray = temp;
	}
}

template<typename T>
inline int vector<T>::getLength() { return vectorSize; }

template<typename T>
inline T* vector<T>::getVector() { return vectorArray; }
