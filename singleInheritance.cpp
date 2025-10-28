#include<iostream>
using namespace std;

class Vehicle{
    public:
        int topSpeed;
        float mileage;
        string fuel;
};


// Single Inheritance
class Car : public Vehicle{
    public:
        bool sunroof;
};
// Hierarchical Inheritance
class Truck : public Vehicle{
    public:
        int spaceInKg;
};

class Scooty : public Vehicle{
    private:
        int bootSpace; // Mentioned inside private as i want to exclude it from derived class Bike
};




// =====Multi level inheritance======
// class Bike : Scooty{ // Derived as private by default
class Bike : public Scooty{ // Child / Derived class 
    public:
        int gears;
};




int main()
{
    Bike b1;
    b1.gears=5;
    b1.mileage=15;
    b1.topSpeed=90; // Can't access these two if access modifier not mentioned after ':', it will private then
    return 0;
}