#include<iostream>
#include<typeinfo>
using namespace std;

class Cricketer{
    public:
        string name;
        int runs;

        Cricketer(string name, int runs){
            // name = name;
            this->name = name;
            // runs = runs;
            this->runs = runs;
        }
        void b(Cricketer *obj){
            cout<<"Inside b"<<endl;
            cout<<"Name: "<<obj->name<<endl;
        }
        void a(){
            cout<<"Inside a"<<endl;
            b(this);
        }
        Cricketer& returnClass(){
            return *this;
        }
        void printType(){
            cout<<typeid(this).name()<<endl;
        }
        void printType2() const {
            cout<<typeid(this).name()<<endl;
        }

};

void print(Cricketer c){
    cout<<c.name<<" "<<c.runs<<endl;
}

int main(){
    Cricketer c1("Virat Kohli", 25000);
    Cricketer c2("Rohit Sharma", 18000);
    // print(c1);
    // print(c2);
    // c1.a();
    Cricketer c3 = c2.returnClass();
    print(c3);
    c1.printType();
    c1.printType2();
}