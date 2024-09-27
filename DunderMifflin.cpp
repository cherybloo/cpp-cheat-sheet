/* WHAT'S A NAMESPACE??
A namespace in cpp is just simply a bazilion things in a "package".
So all classes, functions, or statements can be packed into a single package
 */

/* Use #include to import library in c++  */
#include <iostream>

/* Declare the namespace you want to use for the rest of the code */
using namespace std;

/* Creating a new namespace called DunderMifflin */
namespace DunderMifflin{
    /* Declaring a function called whoAreYou() */
    void whoAreYou(int choice); 

    /* START OF banner() FUNCTION */
    void banner(){ 
        cout << R"(

██████╗ ██╗   ██╗███╗   ██╗██████╗ ███████╗██████╗     ███╗   ███╗██╗███████╗███████╗██╗     ██╗███╗   ██╗
██╔══██╗██║   ██║████╗  ██║██╔══██╗██╔════╝██╔══██╗    ████╗ ████║██║██╔════╝██╔════╝██║     ██║████╗  ██║
██║  ██║██║   ██║██╔██╗ ██║██║  ██║█████╗  ██████╔╝    ██╔████╔██║██║█████╗  █████╗  ██║     ██║██╔██╗ ██║
██║  ██║██║   ██║██║╚██╗██║██║  ██║██╔══╝  ██╔══██╗    ██║╚██╔╝██║██║██╔══╝  ██╔══╝  ██║     ██║██║╚██╗██║
██████╔╝╚██████╔╝██║ ╚████║██████╔╝███████╗██║  ██║    ██║ ╚═╝ ██║██║██║     ██║     ███████╗██║██║ ╚████║
╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚═════╝ ╚══════╝╚═╝  ╚═╝    ╚═╝     ╚═╝╚═╝╚═╝     ╚═╝     ╚══════╝╚═╝╚═╝  ╚═══╝
                                                                                                          


Are you an employee (1) or a customer (2)? Answer with 1 or 2: )";
    int userChoice;
    cin >> userChoice;
    whoAreYou(userChoice);
    }
    /* END OF banner() function */

    /* An array with 5 elements called perks */
    string perks[5] = {"Unlimited Coffee","Unlimited Paper","Nap hours","Party for every birthday","All kinds of Christmas Party"};

    /* START OF Employee class */
    class Employee{ // The class
        private: // Access specifier -> private means it's only accessible for this class
            // ELEMENTS
            double salary = 0.0; 
            string name;
            int age;
        public: // Access specifier -> public means it's accessible anywhere
            // FUNCTIONS
            string getName(){ return name; }
            int getAge() { return age; }

            void setName(string name) { this->name = name; }
            void setAge(int age) { this->age = age; }
    };
    /* END OF Employee class */

    /* START OF Person class EXTENDING THE public Employee class */
    class Person: public Employee{
        public: // Access specifier -> private means it's only accessible for this class
            // FUNCTION
            bool sayGreeting(){
                int numberOfPerks = sizeof(perks) / sizeof(perks[0]);
                string name;
                int age;

                cout << "Enter your name: ";
                cin >> name;
                setName(name);

                cout << "How old are you? ";
                cin >> age;
                cout << endl;
                setAge(age);

                if (age < 18) { cout << "Sorry, we don't condone child labor here"; }
                else if (age > 45) { cout << "Sorry, we don't hire a boomer"; return false; }

                cout << "WELCOME YOU'RE HIRED!" << endl;
                cout << "Here are the perks of working here: \n";
                for (int i=0; i < numberOfPerks; i++){
                    cout << "- " + perks[i] << endl;
                }
                return true;
            }
    };
    /* END OF Person class EXTENDING THE public Employee class */

    /* START OF Customer class */
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
        protected:

    };
    /* END OF Customer class */

    /* START OF function whoAreYou() */
    void whoAreYou(int choice){
        Person person;      // Instance of the Person class called person
        Customer customer;  // Instnce of the Customer class called customer
        // Switch case 
        switch(choice){
            case 1:
                person.sayGreeting();
                break;
            case 2:
                cout << "You're a customer" << endl;
                break;
            default:
                cout << "Have a good one!" << endl;
        }
    };
    /* END OF function whoAreYou() */
};

/* Use this namespace for the rest of the code */
using namespace DunderMifflin;

/* The main function */
int main(){
    banner();
    return 0;
}