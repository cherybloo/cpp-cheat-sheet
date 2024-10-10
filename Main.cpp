// #include [LIBRARY NAME]
// #include <iostream>
// using namespace std; -> it makes sure that the compiler knows that we're reffering to this namespace
// using namespace std;
// declaring function here

#include "MyLib.hpp"

class Adventures{ // The class
    private: // Access specifier
        string name; // Attribute (string variable)
    public:
        string getName() { return name; }
        void setName(string name){ this->name = name; }
};

class Dog{
    public:
        string name = "Picca";
};

void SayGreeting(); // declare function prototype

int main(){
    // std::cout << "Hello Laurencio!" << std::endl; -> using cout and endl function from the std namespace
    // << -> can be used for left shift operator or for insertion operator
    SayGreeting();
    cout << endl;
    Dog dog;
    cout << dog.name;
    return 0;
};

void SayGreeting(){
    string name= "";
    cout << "Welcome Home Adventures!\n Let me know your name\n";
    cout << "Enter your name: ";
    cin >> name;
    Adventures user;
    user.setName(name);
    cout << "Hello there, " + user.getName();
};