#include <iostream>
#include <cstring>
using namespace std;

void ageCheck();

int main()
{
   /*Develop a program to classify a person’s age group:

    Input the age from the user.
    Classify the age into categories: “Child” (<12), “Teen” (12-19), “Adult” (20-64), and “Senior” (65+).*/

    short int age;
    string classification;

    cout << "This program tells you whether you are a child, a teen, an adult, or a senior, based on the age you input." << endl;
    
    ageCheck();

    return 0;
}

void ageCheck() {
    short int age;
    string classification;

    cout << "Enter your age in years: ";
    cin >> age;

    classification =
        (age < 0) ? "not really supposed to do this. Error!" :
        (age >= 0 && age < 12) ? "a child." :
        (age >= 12 && age < 20) ? "a teen." :
        (age >= 20 && age < 65) ? "an adult." :
        "a senior.";

    cout << "You are " << classification;
}