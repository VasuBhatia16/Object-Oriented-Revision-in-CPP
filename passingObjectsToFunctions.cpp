#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        int price;
        int seats;
        string type;
};

void print(Car c){ // Will take input of data type Car( User defined dt)
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}


void change(int x){
    x=10; // x is pass by value so x=10 only inside function
}

void changeInClass(Car c){
    c.name = "Honda City"; // c is pass by value so c.name="Honda City" is only inside function (local scope)
}

void changePassByRef(Car& c){
    c.name = "Honda City"; // c is pass by value so c.name="Honda City" is only inside function (local scope)
}

int main(){

    int x=4;
    cout<<x<<endl; // x=4
    change(x);  // x is pass by value so x=4 here
    cout<<x<<endl; // x=4


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



    print(c1); //input of dt Car is indirectly any instance / object of the class Car

    changeInClass(c1); //pass by value

    print(c1); // Nothing will change after using changeInClass as it is pass by value ( ~lar behaviour to when integer is passed)

    print(c2); // WagonR
    changePassByRef(c2); //pass by ref so it will change the name of car
    print(c2); //Honda City

    print(c3);


}
