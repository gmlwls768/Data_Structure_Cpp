#include "header.h"

enum Menu
{
    FADD = 1,
    FDEL,
    FPRI,
    FEND,
};

int main(int argc, char const *argv[])
{
    int cint, cint2;
    string cstring;
    DLinkedList dlink;
    dlink.back();
    dlink.front();
    while (cint != FEND)
    {
        if (dlink.empty())
        {
            cout << "비어있음" << endl;
        }
        cout << "1: 리스트 삽입 2: 리스트 제거 3: 출력 4: 종료" << endl;
        cin >> cint;
        switch (cint)
        {
        case FADD:
            cout << "1: 앞에서 삽입, 2: 뒤에서 삽입" << endl;
            cin >> cint2;
            cout << "값 입력" << endl;
            cin >> cstring;
            if (cint2 == 1)
            {
                dlink.addFront(cstring);
            }
            else if (cint2 == 2)
            {
                dlink.addBack(cstring);
            }

            break;
        case FDEL:
            cout << "1: 앞에서 제거, 2: 뒤에서 제거" << endl;
            cin >> cint2;
            if (cint2 == 1)
            {
                dlink.removeFront();
            }
            else
            {
                dlink.removeBack();
            }
            break;
        case FPRI:
            cout << "앞: " << dlink.front() << "   ";
            cout << "뒤: " << dlink.back() << endl;
            break;
        case FEND:
            break;
        default:
            cout << "정해진 값을 입력하시오";
            break;
        }
    }

    return 0;
}
