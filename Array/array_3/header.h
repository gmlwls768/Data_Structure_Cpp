#include <iostream>

using namespace std;

class IndexOutOfBounds
{
public:
    IndexOutOfBounds();
    IndexOutOfBounds(string message);
    string errorMessage;
};

class GameEntry
{ // a game score entry
public:
    GameEntry(const string &n = "", int s = 0); // constructor
    string getName() const;                     // get player name
    int getScore() const;                       // get score
private:
    string name; // player name
    int score;   // player score
};

class Scores
{ // stores game high scores
public:
    Scores(int maxEnt = 10);      // constructor
    ~Scores();                    // destructor
    void add(const GameEntry &e); // add a game entry
    GameEntry remove(int t);      // remove the ith entry
    void showEntries();

private:
    int maxEntries;
    int numEntries;
    GameEntry *entries;
};
