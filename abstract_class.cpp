// an abstract class that implements pure virtual methods
#include <iostream>
using namespace std;

class Vehicle {
    //complete the class definition
    public:
    // pure virtual method
        virtual void drive() = 0;
};

class Car: public Vehicle {
    public:
        void drive() {
            cout << "Driving a car!"<<endl;
        }
};

class Bicycle: public Vehicle {
    public:
        void drive() {
            cout << "Driving a bicycle!"<<endl;
        }
};

int main()
{
    Car c;
    Bicycle b;
    Vehicle *v1 = &c;
    Vehicle *v2 = &b;

    // calling drive method of Car class using pointer of Vehicle class
    v1->drive();
    // calling drive method of Bicycle class using pointer of Vehicle class
    v2->drive();

    return 0;
} 