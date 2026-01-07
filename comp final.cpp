#include <iostream>
#include <string>
using namespace std;


bool dfaAcc (string dfa) {
    char state = 'A';   // Start state

    for (int i = 0; i < dfa.length(); i++) {
        char ch = dfa[i];


    }


    if (state == 'G' || state == 'J')
        return true;
    else
        return false;
}

int main() {
    string dfa;
    cout << "Enter string : ";
    cin >> dfa;

    if (dfaAccept(dfa))
        cout << "String is accepted" << endl;
    else
        cout << "String is rejected" << endl;

    return 0;
}

