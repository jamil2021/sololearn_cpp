#include <iostream>
using namespace std;

class Animal
{
    public:
        string name;
    //your code goes here
    virtual void speak() {}
    
};
class Dog: public Animal
{
    public:
        void speak() {
            cout <<"Woof!"<<endl;
        }
};
class Cat: public Animal
{
    public:
        void speak() {
            cout <<"Meaw!"<<endl;
        }
};

int main() {
    Cat c1;
    c1.name = "Fluffy";
    Dog d1;
    d1.name = "Bingo";
    
    Animal *a1 = &c1;
    Animal *a2 = &d1;
    
    // array pointers to Animal objects
    Animal* arr[] = {a1, a2}; 
    // call the speak method using array of pointers to Animal objects in a loop
    for(int i=0;i<2;i++){
        arr[i]->speak();
    }
}