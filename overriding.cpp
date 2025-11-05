#include<iostream>
using namespace std;

//Run-time Polymorphism

class Scooty{ // Parent Class
    public:
        int topSpeed;
        int mileage;
        virtual void print(){
            cout<<"Scooty"<<endl;
        }
    private:
        int bootSpace;
};

class Bike : public Scooty{ // Derived class 
    public:
        int gears;
        void print(){
            cout<<"Bike"<<endl;
        }
};

class SuperBike : public Bike{ // Derived class 
    public:
        int gears;
        void print(){
            cout<<"SuperBike"<<endl;
        }
};

int main()
{
    Bike b1;
    b1.print(); //As intended
    Bike* b2 = new Bike();
    b2->print(); //As intended
    Scooty* b3 = new Bike(); //Now problem as Scooty pointer has Bike allocated
    b3->print(); //Prints scooty if function is not defined virtual
    Scooty* b4 = new SuperBike();
    b4->print(); 
    //Normal case: Scooty
    //Scooty is virtual: SuperBike
    return 0;
}