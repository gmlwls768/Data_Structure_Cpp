#include <iostream>
#include <vector>

using namespace std;
using std::vector;

class victo
{
public:
    victo();
    victo(string name, int score);
    string getname() const;
    int getscore() const;

private:
    string name;
    int score;
};
victo::victo() {}
string victo::getname() const
{
    return name;
}
int victo::getscore() const
{
    return score;
}
victo::victo(string n, int s)
    : name(n), score(s){};

enum menu
{
    push = 1,
    pri,
    sizeg,
    endg,
};

int main(int argc, char const *argv[])
{
    vector<victo> myvec;
    int cint, cint2;
    string cstring;
    while (cint != endg)
    {
        cout << "push=1 print = 2 size = 3 end =4" << endl;
        cin >> cint;
        switch (cint)
        {
        case push:
            cout << "endter string" << endl;
            cin >> cstring;
            cout << "endter int" << endl;
            cin >> cint2;
            myvec.push_back(victo(cstring, cint2));
            break;
        case pri:
            cout << " enter index value" << endl;
            cin >> cint2;
            cout << myvec[cint2].getname() << myvec[cint2].getscore() << endl;
            break;
        case sizeg:
            cout << myvec.size() << endl;
            break;
        default:
            break;
        }
    }
    // myvec.push_back(victo("name", 10));
    // myvec.push_back(victo("hj", 100));

    // cout << myvec[0].getname() << myvec[0].getscore() << endl;
    // cout << myvec.size() << endl;

    // cout << myvec[1].getname() << myvec[1].getscore() << endl;

    return 0;
}
