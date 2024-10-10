/* Friends are functions or classes declared with the friend keyword
In C++, friendship is not inherited. If a base class has a friend function, then the function doesn’t become a friend of the derived class(es) */

#include <iostream>
using namespace std;

class BaseClass{
    int x,y; // Without any access specifier these variables are automatically private
    public:
        BaseClass () { x=2; y=4; }
        friend void baseClassDefault();
};

class DerivedClass : public BaseClass{
    int y;
    public:
        DerivedClass() { y=3; }
        
};

void baseClassDefault(){
    // Inheritance the DerivedClass class
    BaseClass baseClass;
    cout << "The default value of A::x = " << baseClass.x << endl;
    cout << "The default value of B::y = " << baseClass.y << endl;
};

int main(){
    baseClassDefault();
    return 0;
}