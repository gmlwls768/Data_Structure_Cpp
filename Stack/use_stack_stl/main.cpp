#include <iostream>
#include <stack>
using namespace std;
using std::stack;

int main(int argc, char const *argv[])
{
    stack<int> mystack;
    int A;
    while (true)
    {
        cout << "0 is push, 1 is pop, 2 is size, 3 is top, 4 is empty" << endl;
        cin >> A;
        switch (A)
        {
        case 0:
            cout << "enter num" << endl;
            cin >> A;
            mystack.push(A);
            break;

        case 1:
            mystack.pop();

            break;

        case 2:
            cout << mystack.size() << endl;
            break;

        case 3:
            cout << mystack.top() << endl;
            break;

        case 4:
            if (mystack.empty() == true)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;
        default:
            cout << "enter number plz" << endl;
            break;
        }
    }
    return 0;
}
