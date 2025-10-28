#include<iostream>
using namespace std;

class Student{
    int rno;
    string name;
    
    public:
        Student(string name,int rno){ 
            this->name = name;
            this->rno = rno;
        }

        void display(){
            cout<<name<<" "<<rno<<endl;
        }

        int getRno(){ //Getter
            return rno;
        }
        void setRno(int rno){// Setter
            this->rno = rno;
        }

};

int main()
{
    Student s1("Vasu",150);
    // cout<<s1.rno<<endl; // ERROR: as accessing private member
    cout<<s1.getRno()<<endl;

    s1.setRno(151);
    s1.display();
    return 0;

}