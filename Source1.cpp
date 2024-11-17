// data structure project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Array {
private:
	int* array;
	int size;
public:
	Array(int* arr, int s) 
	{
		size = s;
		array = new int[size];
		for (int i = 0; i < size; ++i)
		{
			array[i] = arr[i];

		}
	}
	void Insert(int index, int value)
	{
		array[index] = value;
	}
	void ViewArray()
	{
		for (int i = 0; i <= size - 1; i++)
		{
			cout << array[i];
		}
	}
	~Array() {
		delete[]array;
	}

};


int main()
{
	int myArrey[] = { 1,2,5,8 };
	int size = 0;
	for (int i : myArrey)
	{
		size++;
	}
	int index, value;
	cout << "enter the index";
	cin >> index;
	cout << "enter the value";
	cin >> value;
	if (index > size - 1)
	{
		cout << "index is out of the range";
	}
	else
	{
		Array x(myArrey, size);
		x.Insert(index, value);
		x.ViewArray();
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
