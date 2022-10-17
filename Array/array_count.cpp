#include <iostream>
using namespace std;

void count(int array[], int num)
{
    int max = array[0];
    int min = array[0];
    for (int i = 0; i < num; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << "최댓값: " << max << endl;
    cout << "최솟값: " << min << endl;
}

int main(int argc, char const *argv[])
{
    int A, B;
    cout << "배열 갯수" << endl;
    cin >> A;
    int array[A];
    for (int j = 0; j < A; j++)
    {
        cout << "요소 입력" << endl;
        cin >> B;
        array[j] = B;
    }
    count(array, A);

    return 0;
}
