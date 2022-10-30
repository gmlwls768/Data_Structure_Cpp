#include "header.h"
enum menu
{
    insertm = 1,
    removem,
    sizeg,
    emptyg,
    frontm,
    backm,
    endg,
};

int main()
{
    int cint;
    string cstring;
    LinkedDeque Link;
    cin >> cint;
    while (cint != endg)
    {
        cout << "What you want to do?" << endl;
        cout << "1: insert 2:remove 3: size 4: empty 5:front 6:back 7:end" << endl;
        cin >> cint;
        switch (cint)
        {
        case insertm:
        {
            cout << "front: 1 back: 2 " << endl;
            cin >> cint;
            if (cint == 1)
            {
                cout << " insert string" << endl;
                cin >> cstring;
                Link.insertFront(cstring);
            }
            else if (cint == 2)
            {
                cout << " insert string" << endl;
                cin >> cstring;
                Link.insertBack(cstring);
            }

            break;
        }
        case removem:
        {
            cout << "front: 1 back: 2 " << endl;
            cin >> cint;
            if (cint == 1)
            {
                Link.removeFront();
            }
            else if (cint == 2)
            {
                Link.removeBack();
            }

            break;
        }
        case sizeg:
        {
            cout << Link.size() << endl;
            break;
        }
        case emptyg:
        {
            if (Link.empty())
                cout << "is empty" << endl;
            else
            {
                cout << "is not empty" << endl;
            }
            break;
        }
        case frontm:
        {
            cout << Link.front() << endl;
            break;
        }
        case backm:
        {
            cout << Link.back() << endl;
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
