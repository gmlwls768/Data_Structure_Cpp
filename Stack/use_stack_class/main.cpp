#include "head.h"

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
    stack<student> mynew;
    int cint = 0;
    string name;
    int score;
    while (cint != endg)
    {
        cin >> cint;
        switch (cint)
        {
        case push:
            cout << "이름" << endl;
            getline(cin, name);
            cout << "점수" << endl;
            cin >> score;
            cin.ignore(256, 'n');
            mynew.push(student(name, score));
            break;
        case pop:
            mynew.pop();
            break;
        case sizeg:
            cout << mynew.size() << endl;
        case emptyg:
            if (mynew.empty())
                cout << "is empty" << endl;
            else
            {
                cout << "is not empty" << endl;
            }
        case top:
            cout << "이름: " << mynew.top().getName() << "점수: " << mynew.top().getScore() << endl;
        default:
            break;
        }
    }
    return 0;
}
