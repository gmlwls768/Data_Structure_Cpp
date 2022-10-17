#include "header.h"

enum Menu
{
    ARR_ADD = 1,
    ARR_DEL,
    ARR_PRINT,
    ENDGAME,
};

int main(int argc, char const *argv[])
{
    Scores score(10);
    GameEntry player[10];
    cout << "총 저장가능한 갯수는 10개입니다." << endl;
    int cint;
    int set = 0;
    string cstring;
    while (cint != ENDGAME)
    {
        cout << "1: 플레이어 추가 2: 플레이어 제거 3: 출력 4: 종료" << endl;
        cout << "숫자를 입력하시오" << endl;
        cin >> cint;
        switch (cint)
        {
        case ARR_ADD:
            cout << "이름을 입력하시오" << endl;
            cin >> cstring;
            cout << "점수를 입력하시오" << endl;
            cin >> cint;
            player[set] = GameEntry(cstring, cint);
            score.add(player[set]);
            set++;
            break;

        case ARR_DEL:
            cout << "제거할 인덱스값을 입력하시오";
            cin >> cint;
            try
            {
                score.remove(cint);
                set--;
            }
            catch (IndexOutOfBounds &except)
            {
                cout << except.errorMessage << endl;
            }
        case ARR_PRINT:

            score.showEntries();

        default:
            break;
        }
    }
    return 0;
}