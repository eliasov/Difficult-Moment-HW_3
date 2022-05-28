#include <iostream>
#include <list>
#include <iterator>
#include <random>

using namespace std;

//====================================
// Task_3
//====================================

template <class T>
class Array
{
private:
	T* arr = nullptr;
	int size;
public:
	Array(int s = 1) : size(s)
	{
		arr = new T[s];
	};

	~Array() { delete[] arr; }

	T& operator [] (const int& s)
	{
		if (s > 0 && s < size)
		{
			return arr[s];
		}
		return arr[0];
	};


	class MyIterator
	{
	private:
		T* current;
	public:
		MyIterator(T* itr) : current(itr) {}
		~MyIterator() = default;

		T& operator +  (int val) { return *(current + val); };
		T& operator -  (int val) { return *(current - val); };
		T& operator ++ (int) { return *(++current); };
		T& operator -- (int) { return *(--current); };
		T& operator ++ () { return *(++current); };
		T& operator -- () { return *(--current); };
		T& operator *  () { return *(current); };

		bool operator != (const MyIterator& it) { return current != it.current; };
		bool operator == (const MyIterator& it) { return current == it.current; };

	};

MyIterator begin() { return (arr); };
MyIterator end() { return (arr + size); };

};

