#include<iostream>


using namespace std;

class Cricketer{
    public:
        string name;
        int runs;

        Cricketer(string name, int runs){
            this->name = name;
            this->runs = runs;
        }

};

void print(Cricketer c){
    cout<<c.name<<" "<<c.runs<<endl;
}

void change(Cricketer* c){
    c->runs+=12000; // (*c).runs+=10000;
}

int main(){
    
    int x=4, y=4;
    cout<<&x<<" "<<&y<<endl;
    // addresses of x and y are different
    // To store a memory address we create a pointer
    int* p = &x;
    cout<<p<<" "<<&p<<endl;
    cout<<*p<<endl; //To print value of the pointer
    //Datatype of pointer here is int*, can be float*, double*, etc.
    // This works similar when datatypes are user defined.
    
    Cricketer c1("Virat Kohli", 25000);
    Cricketer c2("Rohit Sharma", 18000);
    print(c1);
    print(c2);
    
    Cricketer* p1 = &c1;
    print(*p1);
    change(&c1);
    // (*p1). is same as c1. and p1-> 

    cout<<(*p1).runs<<endl;
    cout<<p1->runs<<endl;
    
}


// A->B = (*A).B