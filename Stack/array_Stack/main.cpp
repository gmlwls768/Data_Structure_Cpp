#include <iostream>
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

int main()
{

    char cchar;
    int cint;
    string cstring;
    cout << "스택의 자료형 입력" << endl;
    cout << "1: int 2: char 3: string" << endl;
    cin >> cint;
    switch (cint)
    {
    case 1:
    {
        ArrayStack<int> Stack;
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
                cin >> cint;
                Stack.push(cint);

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
        break;
    }
    case 2:
    {
        ArrayStack<char> Stack;
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
                cin >> cchar;
                Stack.push(cchar);

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
        break;
    }
    case 3:
    {
        ArrayStack<string> Stack;
        while (cint != endg)
        {
            cout << "What you want to do?" << endl;
            cout << "1: push 2:pop 3: size 4: empty 5:top 6:end" << endl;
            cin >> cint;
            cin.ignore(256, '\n');
            switch (cint)
            {
            case push:
            {
                cout << "enter " << endl;
                getline(cin, cstring);
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
        break;
    }

    default:
        cout << "입력값 확인 필요" << endl;
        break;
    }

    return 0;
}
