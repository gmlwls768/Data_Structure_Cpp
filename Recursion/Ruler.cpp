#include <iostream>
using namespace std;

string First_inch(int n)
{
    if (n == 1)
        return "-";
    else
        return First_inch(n - 1) + "-";
}

string RulerLeng(int length)
{
    if (length == 1)
        return "-";
    else
    {
        cout << RulerLeng(length - 1) << endl;
        return RulerLeng(length - 1) + "-";
    }
}
void RulerCount(int inch, int length)
{
    if (inch == 0)
        cout << First_inch(length) << inch << endl;
    else
    {
        RulerCount(inch - 1, length);
        cout << RulerLeng(length) << inch << endl;
    }
}

int main(int argc, char const *argv[])
{
    int inch, tick_length;
    int num = 0;
    cout << "enter inch : ";
    cin >> inch;
    cout << "enter major length length : ";
    cin >> tick_length;
    RulerCount(inch, tick_length);
    // cout << RulerLeng(tick_length) << endl;
    return 0;
}
