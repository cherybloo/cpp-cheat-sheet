/* WHAT'S A NAMESPACE??
A namespace in cpp is just simply a bazilion things in a "package".
So all classes, functions, or statements can be packed into a single package
 */
#include <iostream>
using namespace std;

namespace DunderMifflin{
    void whoAreYou(int choice);

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

    string perks[5] = {"Unlimited Coffee","Unlimited Paper","Nap hours","Party for every birthday","All kinds of Christmas Party"};

    class Employee{ // The class
        private: // Access specifier -> private means it's only accessible for this class
            double salary = 0.0;
            string name;
            int age;
        public: // Access specifier -> public means it's accessible anywhere
            string getName(){ return name; }
            int getAge() { return age; }

            void setName(string name) { this->name = name; }
            void setAge(int age) { this->age = age; }
    };

    class Person: public Employee{
        public:
            void sayGreeting(){
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
                else if (age > 45) { cout << "Sorry, we don't hire a boomer"; }

                cout << "WELCOME YOU'RE HIRED!" << endl;
                cout << "Here are the perks of working here: \n";
                for (int i=0; i < numberOfPerks; i++){
                    cout << "- " + perks[i] << endl;
                }
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
        protected:

    };

    void whoAreYou(int choice){
        Person person;
        Customer customer;
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
};

using namespace DunderMifflin;
int main(){
    banner();
    return 0;
}