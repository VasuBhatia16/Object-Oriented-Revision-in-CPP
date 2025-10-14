#include<iostream>
using namespace std;


class Student{
    public:
        string name;  // Attributes of a class
        int rno;
        float cgpa;
};

//Student is a class containing 3 things: name rno and gpa


class Car{
    public:
        string name;
        int price;
        int seats;
        string type;
};


int main(){
    Student s1;
    s1.name= "Vasu Bhatia";
    s1.rno= 150;
    s1.cgpa = 8.83;
    
    Student s2;
    s2.name= "Himanshu";
    s2.rno= 151;
    s2.cgpa = 8.2;

    


    Car c1;
    c1.name = "Fortuner";
    c1.price = 3500000;
    c1.seats = 7;
    c1.type = "SUV";

    Car c2;
    c2.name = "WagonR";
    c2.price = 350000;
    c2.seats = 5;
    c2.type = "LMV";

    Car c3;
    c3.name = "Suzuki";
    c3.price = 750000;
    c3.seats = 6;
    c3.type = "Sedan";

    cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
    cout<<c3.name<<" "<<c3.price<<" "<<c3.seats<<" "<<c3.type<<endl;
}
