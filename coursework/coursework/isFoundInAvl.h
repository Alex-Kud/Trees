#pragma once
#include <list>
using namespace std;
class isFoundInAvl {
public:
    list<bool> path;
    bool isFound;
    isFoundInAvl(bool a) {
        isFound = a;
    }
    isFoundInAvl(bool a, list<bool> b) {
        path = b;
        isFound = a;
    }
    isFoundInAvl(): isFound(false)
    {
    }
};
