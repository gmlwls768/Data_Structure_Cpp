#include <iostream>
using namespace std;
void BubbleSort(int *A, int n)
{ // sort an array of n Integer
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (A[j - 1] > A[j])
            {
                temp = A[j - 1];
                A[j - 1] = A[j];
                A[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 7, 2, 6, 9, 3};

    BubbleSort(arr, 6);

    return 0;
}
