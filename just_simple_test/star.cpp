#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 9; i++)
    {
        for (int k = i; k <= 8; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
