#include <iostream>
#include <queue>
using namespace std;
enum menu
{
    push = 1,
    pop,
    sizeg,
    emptyg,
    front,
    back,
    endg,
};

int main(int argc, char const *argv[])
{
    queue<int> myque;
    int cint = 0;
    while (cint != endg)
    {
        cout << "1:push 2:pop 3:size 4:empty 5:front 6:back 7:end" << endl;
        cin >> cint;
        switch (cint)
        {
        case push:
            cout << "int형 큐 자료 입력" << endl;
            cin >> cint;
            myque.push(cint);
            break;
        case pop:
            myque.pop();
            break;
        case sizeg:
            cout << myque.size() << endl;
            break;
        case emptyg:
            if (myque.empty())
            {
                cout << "is empty" << endl;
            }
            else
            {
                cout << "is not empty" << endl;
            }
            break;
        case front:
            cout << myque.front() << endl;
            break;
        case back:
            cout << myque.back() << endl;
            break;
        case endg:
            cout << "end -- -- " << endl;
            break;

        default:
            break;
        }
    }

    return 0;
}
