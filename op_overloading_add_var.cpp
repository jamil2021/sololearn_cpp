#include <iostream>
using namespace std; 

class MyClass {
 public:
  int var;
  MyClass() {}
  MyClass(int a)
  : var(a) { }

  MyClass operator+(MyClass &obj) {
   MyClass res;
   res.var= this->var+obj.var;
   return res; 
  }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3;
    obj3=obj1+obj2;
    cout<<obj3.var<<endl;
    return 0;
}