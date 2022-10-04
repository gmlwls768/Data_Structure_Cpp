#include "header.h"

enum Menu
{
    FADD = 1,
    FDEL,
    FSEL,
    FPRI,
    FEND,
};

int main(int argc, char const *argv[])
{
    int cint;
    string cstring;
    CircleList clist;
    while (cint != FEND)
    {
        if (clist.empty())
        {
            cout << "리스트가 비어있습니다." << endl;
        }
        cout << "1: 리스트 삽입 2: 리스트 제거 3: 커서 업데이트 4: 출력 5: 종료" << endl;
        cin >> cint;
        switch (cint)
        {
        case FADD:
            cout << "값 입력" << endl;
            cin >> cstring;
            clist.add(cstring);
            break;
        case FDEL:
            cout << "선택한 커서의 다음 값 제거" << endl;
            clist.remove();
            break;
        case FPRI:
            cout << "1: 커서 값 출력 2: 커서 다음값 출력" << endl;
            cin >> cint;
            if (cint == 1)
            {
                cout << clist.back() << endl;
            }
            if (cint == 2)
            {
                cout << clist.front() << endl;
            }

            break;
        case FSEL:
            clist.advance();
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
