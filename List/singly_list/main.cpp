#include "header.h"

enum Menu
{
    NODE_ADD = 1,
    NODE_DEL,
    NODE_PRINT,
    ENDGAME,
};
int main(int argc, char const *argv[])
{
    int cint;

    string add;
    int del;
    StringLinkedList stringlink;

    while (cint != ENDGAME)
    {
        if (stringlink.empty())
        {
            cout << "노드가 비어있습니다." << endl;
        }

        cout << "1: 리스트 삽입 2: 리스트 제거 3: 출력 4: 종료" << endl;
        cin >> cint;
        switch (cint)
        {
        case NODE_ADD:
            cout << "리스트의 노드에 저장할 값을 입력하세요" << endl;
            cin >> add;
            stringlink.addFront(add);
            break;
        case NODE_DEL:
            stringlink.removeFront();
            break;
        case NODE_PRINT:
            cout << stringlink.front();
            break;
        case ENDGAME:
            break;
        default:
            cout << "숫자 넣으세요" << endl;
            break;
        }
    }

    return 0;
}
