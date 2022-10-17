#include <iostream>
#include <stack>
using namespace std;
using std::stack;
class student
{
private:
    string name;
    int score;

public:
    student(string Name, int Score);
    ~student();
    string getName() const;
    int getScore() const;
};

string student::getName() const
{
    return name;
}
int student::getScore() const
{
    return score;
}

student::student(string Name, int Score)
    : name(Name), score(Score) {}

student::~student()
{
}
