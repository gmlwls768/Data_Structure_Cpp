#include <vector>
#include <list>
#include <iostream>

using namespace std;

void vectorSum(const vector<int> &V)
{
}

int vectorSum2(list<int> V)
{
    int sum = 0;
    for (list<int>::iterator p = V.begin(); p != V.end(); ++p) // make p iterator
        sum += *p;
    return sum;
}
int main(int argc, char const *argv[])
{
    vector<string> myV;
    vector<string>::iterator iter;
    vector<string>::iterator iter2;

    myV.push_back("a");
    myV.push_back("b");
    myV.push_back("c");
    myV.push_back("d");

    // input pointer
    iter = myV.begin(); //연산자  오버로딩으로 인해 대입 연산 가능
    cout << *iter << endl;
    cout << *(++iter) << endl;

    cout << "---- iter access" << endl;
    for (iter = myV.begin(); iter != myV.end(); iter++)
        cout << *(iter) << endl;
    cout << "---- idx access" << endl;

    for (int k = 0; k < myV.size(); k++)
        cout << myV[k] << endl;
    // dont use usually

    std::list<int> myList;
    myList.push_front(100);
    myList.push_front(110);
    myList.push_front(120);
    myList.push_front(130);
    myList.push_front(140);

    cout << myList.size() << endl;
    cout << myList.front() << endl;
    // cout << vectorSum2(myList) << endl;
    return 0;
}
