#include<iostream>
using namespace std;

class Fraction
{
private:
    int num;
    int den;
public:
    Fraction(int num,int den){
        this->num=num;
        this->den=den;
    }
    Fraction(){}
    void print(){
        cout<<num<<" / "<<den<<endl;
    }
    Fraction operator+(Fraction f){
        Fraction tempF;
        tempF.num = (this->num)*(f.den) + (f.num)*(this->den);
        tempF.den = (this->den)*(f.den);
        return tempF;
    }
};



int main()
{
    Fraction f1(1,2),f2(1,3),f3;
    f3=f1+f2;
    f3.print();
    return 0;
}