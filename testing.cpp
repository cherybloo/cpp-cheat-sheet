
// CPP Program to demonstrate the relation between 
// Inheritance and Friendship 
#include <iostream> 
using namespace std; 
  
// Parent Class 
class A { 
protected: 
    int x; 
    int y;
public: 
    A() { x = 0; y=5;} 
    friend void show(); 
}; 
  
// Child Class 
class B : public A { 
private: 
    int y; 
  
public: 
    B() { y = 0; } 
}; 
  
void show() 
{ 
    A b; 
    cout << "The default value of A::x = " << b.x << endl; 
  
    // Can't access private member declared in c~lass 'B' 
    cout << "The default value of B::y = " << b.y << endl; 
} 
  
int main() 
{ 
    show(); 
    getchar(); 
    return 0; 
}