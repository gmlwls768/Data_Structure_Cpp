#include <iostream>
#include "Student.h"

class Comparator
{
public:
public:
    bool operator()(Student &s1, Student &s2)
    {
        return s1.getId() < s2.getId();
    }
};
