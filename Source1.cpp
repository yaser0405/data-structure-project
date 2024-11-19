// data structure project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Array {
private:
	int* array;
	int size;
	int main_size;
public:
	Array(int* arr, int s, int ms) {
		size = s;
		main_size = ms;
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
	int Delet_By_Value(int value)
	{
		int ind = 0;
		for (int i = 0; i <= size - 1; i++)
		{
			if (array[i] == value)
			{
				ind = i;
				for (int temp = 0; i <= size - 1; i++)
				{
					temp = array[i + 1];
					array[i] = temp;
				}
				size--;
				return(ind);
			}
		}
		return -1;
	}
	void Delete_By_Index(int input)
	{

		for (int temp = 0; input <= size - 1; input++)
		{
			temp = array[input + 1];
			array[input] = temp;
		}
		size--;
	}
	void Append(int value)
	{
		if (main_size > size)
		{
			array[size] = value;
			size++;
		}
		else cout << "Array is full!";
	}
	void Append_array(int arry[])
	{
		int arry_size = 0;
		for (int i = 0; arry[i] != 0; i++)
		{
			arry_size++;
		}
		int empty = main_size - size;
		if (arry_size < empty)
		{
			empty = arry_size;
		}
		for (int i = 0; empty > i; i++)
		{
			array[size] = arry[i];
			size++;
		}
	}
	void Reverse(int arry[])
	{
		int temp = arry[0];
		for (int i = 1; i < size; i++)
		{
			arry[i - 1] = arry[i];
		}
		arry[size - 1] = temp;
	}
	int Search_By_Value(int value)
	{
		for (int i = 0; i < size; ++i)
		{
			if (array[i] == value)
			{
				return(i);
			}
		}
		return(-1);
	}
	~Array() {
		delete[]array;
	}
};

int main()
{
	const int main_size = 12;
	int myArrey[main_size] = { 1,3,5,8,7,6,3 };
	int size = 0;
	for (int i : myArrey)
	{
		if (i != 0)
		{
			size++;

		}
	}
	cout << size << endl;
	int index, value, input;
	cout << "enter the index";
	cin >> index;
	cout << "enter the value";
	cin >> value;
	cout << "enter the index for delet that index:";
	cin >> input;
	Array x(myArrey, size, main_size);
	cout << x.Search_By_Value(value);
	x.Append_array(myArrey);
	x.ViewArray();
	cout << endl;
	if (index > size - 1)
	{
		cout << "index is out of the range";
	}
	else
	{
		x.Insert(index, value);
		x.ViewArray();
		cout << endl;

	}
	if (input > size - 1)
	{
		cout << "index is out of the range";
	}
	else
	{
		x.Delete_By_Index(input);
		x.ViewArray();
		cout << endl;

	}
	cout << x.Delet_By_Value(value);
	cout << endl;
	x.ViewArray();
	cout << endl;
	x.Append(value);
	x.ViewArray();
	cout << endl;




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
