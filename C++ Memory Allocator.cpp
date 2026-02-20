#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	cout << "-------------------- 1 Dimensional Array --------------------\n" << endl;

	while (1)
	{
		cout << "Enter the size of the 1D Array : ";
		cin >> size;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Invalid Input! Size must be an integer. Please Try Again.\n";
			continue;
		}
		if (size <= 0)
		{
			cout << "Invalid Size! Size of the 1D Array must be a positive, non zero integer. Please Try Again.\n";
			continue;
		}
		else
			break;
	}

	int* array_1D = new int[size];

	cout << "\nEnter " << size << " number elements to fill up the array: \n";
	for (int i = 0; i < size; i++)
	{
		cin >> array_1D[i];
	}
	cout << endl;
	cout << "1D Array: ";
	for (int i = 0; i < size; i++)
	{
		cout << array_1D[i] << " ";
	}
	delete[] array_1D;
	cout << endl << endl;

	cout << "-------------------- 2 Dimensional Array --------------------\n" << endl;
	int rows = 0, col = 0;
	cout << "For the 2D Array: \n";

	while (1)
	{
		cout << "Enter number of rows: ";
		cin >> rows;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\nInvalid Input! \n";
			cout << "Number of rows must be an integer. Please Try Again.\n" << endl;
			continue;
		}
		if (rows <= 0)
		{
			cout << "\nInvalid Number of rows! \n";
			cout << "Number of rows must be a positive, non zero integer. Please Try Again.\n" << endl;
			continue;
		}
		else
			break;
	}
	while (1)
	{
		cout << "Enter number of columns: ";
		cin >> col;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\nInvalid Input! \n";
			cout << "Number of columns must be an integer. Please Try Again.\n" << endl;
			continue;
		}
		if (col <= 0)
		{
			cout << "\nInvalid Number of columns! \n";
			cout << "Number of columns must be a positive, non zero integer. Please Try Again.\n" << endl;
			continue;
		}
		else
			break;
	}

	int** array_2D = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		array_2D[i] = new int[col];
	}

	cout << "\nEnter the elements to fill up the 2D Array: \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> array_2D[i][j];
		}

	}
	cout << endl;
	cout << "2D Array: \n" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << array_2D[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++)
		delete[] array_2D[i];
	delete[] array_2D;


	return 0;
}