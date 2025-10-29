#include <iostream>
#include <string>
using namespace std;


string getFullName(string firstName, string lastName) {
    string fullName = firstName + " " + lastName;
    return fullName;
}

int main() {
    string firstName, lastName;


    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;


    string fullName = getFullName(firstName, lastName);


    cout << "Full name: " << fullName << endl;

    return 0;
}

