#include "header.h"

enum menu
{
    push = 1,
    pop,
    sizeg,
    emptyg,
    top,
    endg,
};

int main(int argc, char const *argv[])
{
    LinkedStack Stack;
    int cint;
    string cstring;

    while (cint != endg)
    {
        cout << "What you want to do?" << endl;
        cout << "1: push 2:pop 3: size 4: empty 5:top 6:end" << endl;
        cin >> cint;

        switch (cint)
        {
        case push:
        {
            cout << "enter " << endl;
            cin >> cstring;
            Stack.push(cstring);

            break;
        }
        case pop:
        {
            Stack.pop();
            break;
        }
        case sizeg:
        {
            cout << Stack.size() << endl;
            break;
        }
        case emptyg:
        {
            if (Stack.empty())
                cout << "is empty" << endl;
            else
            {
                cout << "is not empty" << endl;
            }
            break;
        }
        case top:
        {
            cout << Stack.top() << endl;
            break;
        }
        default:
            break;
        }
    }

    return 0;
}