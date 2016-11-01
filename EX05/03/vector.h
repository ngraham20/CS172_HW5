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
	bool empty() const;
	void clear();
	void swap(vector&);

private:
	T* vectorArray;
	int vectorSize;
};

template<typename T>
inline vector<T>::vector() { vectorArray = new T[] }

template<typename T>
inline vector<T>::vector(int size) 
{
	this->vectorSize = size;
	vectorArray = new T[size];
	for (int i = 0; i < size; i++)
	{
		vectorArray[i] = i;
	}
}

template<typename T>
inline vector<T>::vector(int size, T type) 
{
	this->vectorSize = size;
	vectorArray = new T[size]{ type };
}

template<typename T>
inline vector<T>::~vector() { delete[] vectorArray; }

template<typename T>
inline void vector<T>::push_back(T newValue)
{
	vectorSize += 1;	T* temp = new T[vectorSize];	temp[vectorSize - 1] = newValue;	if (vectorArray != NULL) {		for (int i = 0; i < vectorSize - 1; i++)		{			temp[i] = vectorArray[i];		}		delete vectorArray;	}	vectorArray = temp;
	for (int i = 0; i < vectorSize; i++)
	{
		cout << vectorArray[i] << endl;
	}
	//vectorSize++;
	//T* temp = new T[vectorSize];
	//temp[vectorSize - 1] = newValue;
	//if (vectorArray != NULL)
	//{
	//	for (int i = 0; i < vectorSize - 1; i++)
	//	{
	//		temp[i] = vectorArray[i];
	//	}
	//	delete vectorArray;
	//}
	//vectorArray = temp;
	//delete temp;
	//for (int i = 0; i < vectorSize; i++)
	//{
	//	cout << vectorArray[i] << endl;
	//}
}



//template<typename T>
//inline void vector<T>::push_back(T newValue)
//{
//	vectorSize += 1;
//	T* temp = new T[vectorSize];
//	temp[vectorSize - 1] = newValue;
//	cout << temp[vectorSize] << endl;
//	if (vectorArray != NULL)
//	{
//		for (int i = 0; i < vectorSize - 1; i++)
//		{
//			temp[i] = vectorArray[i];
//			cout << temp[i] << endl;
//		}
//		cout << temp[vectorSize] << endl;
//		delete vectorArray;
//	}
//	vectorArray = temp;
//	 cout << vectorArray[vectorSize] << endl;
//	for (int i = 0; i < vectorSize; i++)
//	{
//		cout << temp[i] << endl;
//	}
//	delete[] temp;
//}

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
	delete[] temp;
}

template<typename T>
inline int vector<T>::size() const { return vectorSize; }

template<typename T>
inline T vector<T>::at(int location) { return vectorArray[location]; }

template<typename T>
inline bool vector<T>::empty() const
{
	if (vectorSize > 0)
	{
		return false
	}
	return true;
}

template<typename T>
inline void vector<T>::clear()
{
	vectorSize = 0;
	T* temp = new T[size];
	vectorArray = temp;
	delete[] temp;
}

template<typename T>
inline void vector<T>::swap(vector& v2)
{
	int size2 = v2.size();
	if (vectorSize >= size2)
	{
		T* temp = new T[vectorSize];
		temp = vectorArray;
		for (int i = 0; i < size2; i++)
		{
			vectorArray[i] = v2.at(i);
		}
		v2.clear();
		for (int i = 0; i < vectorSize; i++)
		{
			v2.push_back(temp[i]);
		}
		delete[] temp;
	}
	else
	{
		T* temp = new T[size2];
		for (int i = 0; i < size2; i++)
		{
			temp[i] = v2.at(i);
		}
		v2.clear();
		for (int i = 0; i < vectorSize; i++)
		{
			v2.push_back(vectorArray[i]);
		}
		vectorArray = temp;
		delete[] temp;
	}
}
