#include "header.h"
#include <iostream>
enum menu
{
    insert = 1,
    erase,
    sizeg,
    emptyg,
    beging,
    endg,
    endmenu,
};

int main(int argc, char const *argv[])
{
    NodeList Nlist;
    int cint, cint2;
    string cstring;

    while (cint != endmenu)
    {
        NodeList::Iterator iter(Nlist.begin());
        cout << "What you want to do?" << endl;
        cout << "1: insert 2: erase 3: size 4: empty 5:begin 6: end 7: end menu" << endl;
        cin >> cint;

        switch (cint)
        {
        case insert:
        {
            cout << "1. index insert 2. front insert 3. back insert" << endl;
            cin >> cint2;
            switch (cint2)
            {
            case 1:
                cout << "enter index" << endl;
                cin >> cint;
                cout << "enter element" << endl;
                cin >> cint2;
                for (int i = 0; i < cint; i++)
                {
                    iter.operator++();
                }

                Nlist.insert(iter, cint2);
                break;
            case 2:
                cout << "enter element" << endl;
                cin >> cint2;
                Nlist.insertFront(cint2);
                break;
            case 3:
                cout << "enter element" << endl;
                cin >> cint2;
                Nlist.insertBack(cint2);
                break;
            default:
                break;
            }

            break;
        }
        case erase:
        {
            cout << "1. index erase 2. front erase 3. back erase" << endl;
            cin >> cint2;
            switch (cint2)
            {
            case 1:
                cout << "enter index" << endl;
                cin >> cint;
                for (int i = 0; i < cint; i++)
                {
                    iter.operator++();
                }
                Nlist.erase(iter);
                break;
            case 2:
                Nlist.eraseFront();
                break;
            case 3:
                Nlist.eraseBack();
                break;
            default:
                break;
            }
            break;
        }
        case sizeg:
        {
            cout << Nlist.size() << endl;
            break;
        }
        case emptyg:
        {
            if (Nlist.empty())
                cout << "is empty" << endl;
            else
            {
                cout << "is not empty" << endl;
            }
            break;
        }
        case beging:
        {
            NodeList::Iterator iter(Nlist.begin());
            cout << iter.operator*() << endl;

            break;
        }

        case endg:
        {
            NodeList::Iterator iter(Nlist.end());
            iter.operator--();
            cout << iter.operator*() << endl;
            break;
        }
        default:
            break;
        }
    }

    return 0;
}