#include "header.h"
int main(int argc, char const *argv[])
{
    enum menu
    {
        enqueue = 1,
        dequeue,
        sizeg,
        emptyg,
        front,
        endg,
    };

    int cint = 0;
    string cstring;
    ArrayQueue Myqueue(4);

    while (cint != endg)
    {
        cout << "1:enqueue 2:dequeue 3:size 4:empty 5:front 6:end" << endl;
        cin >> cint;
        switch (cint)
        {
        case enqueue:
            try
            {
                cout << "string형 큐 자료 입력" << endl;
                cin >> cstring;
                Myqueue.enqueue(cstring);
            }
            catch (QueueEmpty e)
            {
                cout << e.err << endl;
            }
            break;
        case dequeue:
            try
            {
                Myqueue.dequeue();
            }
            catch (QueueEmpty e)
            {
                cout << e.err << endl;
            }
            break;
        case sizeg:
            cout << Myqueue.size() << endl;
            break;
        case emptyg:
            if (Myqueue.empty())
            {
                cout << "is empty" << endl;
            }
            else
            {
                cout << "is not empty" << endl;
            }
            break;
        case front:
            try
            {
                cout << Myqueue.front() << endl;
            }
            catch (QueueEmpty e)
            {
                cout << e.err << endl;
            }
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
