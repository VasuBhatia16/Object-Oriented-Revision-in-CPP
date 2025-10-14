#include<iostream>
using namespace std;


class Student{
    public:
        string name;
        int rno;
        float cgpa;


        //constructor: A constructor is defined as a special function that is called every time an object of a class type is created, facilitating the initialization of that object
        // Doesn't have a return type
        // Name is same as name of class
        Student(string n, int r, float g){ // Even if we don't define it, it is called itself when creating an object
            // we can define custom arguments/parameters
            //a constructor without no custom/ user defined arguments is called a default contructor
            name=n;
            rno=r;
            cgpa=g;
        }

    };


class Car{
    public:
        string name;
        int price;
        int seats;
        string type;

        Car(){
            cout<<"Default Contructor is called"<<endl;
        }
        // If a a paramterized constructor is defined then it replaces the default constructor until and unless a default constructor is also defined alongside
        Car(string n, int p, int s,string t){

            cout<<"Parametrized Contructor is called"<<endl;
            name = n;
            price=p;
            seats=s;
            type=t;
        }
        // We can define any number of constructor with different arguments ( Function Overloading)
        // Therefore only one default constructor can be defined, but any number of parameterized constructor 
        Car(string n, int p){

            cout<<"Parametrized Contructor is called with 2 details only"<<endl;
            name = n;
            price=p;
        }
};

void printStudent(Student s){ 
    cout<<s.name<<" "<<s.rno<<" "<<s.cgpa<<endl;
}

void printCar(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

int main(){
    // Student s1; As no default constructor is defined , it will give an error
    Student s1("Vasu Bhatia", 150, 8.83);

    printStudent(s1);

    Car c1("Honda City",1500000,5,"Sedan");
    Car c2; 
    c2.name = "Fortuner";
    c2.price = 4000000;
    c2.seats = 8;
    c2.type = "SUV";
    Car c3("Audi",15000000);
    c3.seats = 5;
    c3.type = "Luxury";


    Car c4 = c1; //Copy Constructor (approach 1)
    c4.name = "Creta"; // Deep Copy (No chamnge in c1)
    Car c5(c1); // Copy Constructor (approach 2)
    c5.name = "Tesla"; // Deep Copy (No chamnge in c1)
    printCar(c1);
    printCar(c2);
    printCar(c3);
    printCar(c4);
    printCar(c5);


}
