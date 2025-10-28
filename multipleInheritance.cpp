#include<iostream>
using namespace std;

class Cricketer{
    public:
        int runs;
        int wickets;
};

class Engineer{
    public:
        int cgpa;
        bool placed;
};

//Multiple inheritance 
class OverAchiever : public Cricketer,Engineer{ // Here both are public so no issue else it can be specified for each, class C : public A, protected B 
    public:
        int bankBalance; 
};

int main()
{
    return 0;
}