#include <iostream>
#include <deque>
using namespace std;
using std::deque;

enum menu
{
    frontpush = 1,
    frontpop,
    rearpush,
    rearpop,
    sizeg,
    emptyg,
    front,
    back,
    endg,
};

int main(int argc, char const *argv[])
{
    deque<string> mydeque;
    int cint;

    string cstring;
    cin >> cint;
    while (cint = !endg)
    {
        switch (cint)
        {
        case frontpush:
            cout << "string" << endl;
            cin >> cstring;
            mydeque.push_front(cstring);
            break;
        case frontpop:
            mydeque.pop_front();
        case rearpush:
            cout << "string" << endl;
            cin >> cstring;
            mydeque.push_back(cstring);
        case rearpop:
            mydeque.pop_back();
        case sizeg:
            cout << mydeque.size() << endl;
        case emptyg:
            if (mydeque.empty())
            {
                cout << " is empty" << endl;
            }
            else
            {
                cout << "is not empty" << endl;
            }
        case front:
            cout << mydeque.front() << endl;
        case back:
            cout << mydeque.back() << endl;
        default:
            break;
        }
    }

    return 0;
}
