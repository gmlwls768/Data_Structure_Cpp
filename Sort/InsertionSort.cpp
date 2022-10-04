#include <iostream>
using namespace std;
void insertionSort(char *A, int n)
{ // sort an array of n characters
	for (int i; i < n; i++)
	{									 // insertion loop
		char cur = A[i];				 // current charactor to insert
		int j = i - 1;					 // start at previous character
		while ((j >= 0) && (A[j] > cur)) // while A[j] is out of order
		{
			A[j + 1] = A[j]; // move A[j] right
			j--;			 // decrement j
		}
		A[j + 1] = cur; // this is the proper place for cur
	}
	for (int i = 0; i < n; i++)
	{
		cout << A[i];
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	char A[] = {'2', '1', '5', '4'};
	insertionSort(A, 4);

	// for (int i = 0; i < 4; i++)
	// {
	// 	cout << A[i];
	// }
	// cout << endl;

	return 0;
}
