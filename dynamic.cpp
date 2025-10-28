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

int main(){
    

    int x=4;
    int* p = &x;
    cout<<*p<<endl; // This is one way of memory allocation (STATIC) => FASR
    // Memory allocated in stack ds
    // Memory allocated in compile time like 4 Bytes for int, etc.
    int* p2 = new int(7); // Second way (DYNAMIC) => SLOW
    // Directly allocates memory to pointer
    // No extra variable definitionin between.
    // Memory allocated into heap ds at Run time
    
    // Works same for user defined datatypes

    Cricketer c1("Virat Kohli", 25000);
    // Cricketer* c2 = new Cricketer("Rohit Sharma", 18000);
    Cricketer* c2;
    print(c1);
    print(*c2);
    
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;

    // Initialising like this is better as it will always remain pass by reference, we don't have to explicitly
}
