#include "header.h"
enum menu
{
    insertm = 1,
    erase,
    sizeg,
    emptyg,
    reserve,
    atg,
    // operatorg,
    endg,
};

int main()
{
    int cint, cint2;
    string cstring;
    ArrayVector vec;
    cin >> cint;
    while (cint != endg)
    {
        cout << "What you want to do?" << endl;
        cout << "1: insert 2:erase 3: size 4: empty 5:reserve 6:at 7:operator 8:end" << endl;
        cin >> cint;
        switch (cint)
        {
        case insertm:
        {
            cout << "enter index " << endl;
            cin >> cint;
            cout << "enter value " << endl;
            cin >> cint2;
            vec.insert(cint, cint2);

            break;
        }
        case erase:
        {
            cout << "enter index " << endl;
            cin >> cint;
            vec.erase(cint);
            break;
        }
        case sizeg:
        {
            cout << vec.size() << endl;
            break;
        }
        case emptyg:
        {
            if (vec.empty())
                cout << "is empty" << endl;
            else
            {
                cout << "is not empty" << endl;
            }
            break;
        }
        case reserve:
        {
            cout << "enter index" << endl;
            cin >> cint;
            vec.reserve(cint);
            break;
        }
        case atg:
        {
            cout << "enter index" << endl;
            cin >> cint;
            cout << vec.at(cint) << endl;
            break;
        }

        default:
            break;
        }
    }
    return 0;
}
