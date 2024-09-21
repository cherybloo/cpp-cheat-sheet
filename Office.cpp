/* WHAT'S A NAMESPACE??
A namespace in cpp is just simply a bazilion things in a "package".
So all classes, functions, or statements can be packed into a single package
 */
#include <iostream>
using namespace std;

namespace Office{
    string perks[5] = {"Laptop","Smartphone","Snacks","Holiday","Sand"};

    class Employee{ // The class
        private: // Access specifier -> private means it's only accessible for this class
            // string name;
            // int age;
        public: // Access specifier -> public means it's accessible anywhere
            string getName(){ return name; }
            int getAge() { return age; }

            void setName(string name){ this->name = name; }
            void setAge(int age) { this->age = age; }

        protected: // Access specifier -> protected means it can't be accessed from outside the class, but it's accessible from the inherited classes
            double balance = 9999.99;
            string name;
            int age;
    };

    class Person: public Employee{
        public:
            void getPerson() {
                cout << "Hello, " + name;
            }
    };

    class Customer{
        private:
            string name;
            int age;
            double budget;
        public: 
            string getName(){ return name; }
            int getAge() { return age; }
            double getBudget() { return budget; }

            void setName(string name){ this->name = name; }
            void setAge(int age) { this->age = age; }
            void setBudget(double budget) { this->budget = budget; }
    };

};

using namespace Office;
int main(){
    string name = "";
    Person person1;
    cout << "What's your name? ";
    cin >> name;
    person1.setName(name);
    person1.getPerson();
    cout << Office::perks[0];
}