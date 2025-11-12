#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isIdentifier(string a) {
    if (!(isalpha(a[0]) || a[0] == '_')) {
        return false;
    }
    for (int i = 1; i < a.length(); i++) {
        if (!(isalnum(a[i]) || a[i] == '_')) {
            return false;
        }
    }
    return true;
}

bool txtFile(string filename) {
    ifstream file(filename);


    string line;
    while (getline(file, line)) {

        cout<<"String : "<< line;
        if (isIdentifier(line))
            cout << " -> Valid" << endl;
        else
            cout << " -> Invalid" << endl;
    }

    file.close();
    return true;
}

int main() {
    string filename = "compilerProject.txt";

    if (txtFile(filename)) {
        cout << "File read successfully!" << endl;
    } else {
        cout << "Failed to read the file!" << endl;
    }

    return 0;
}

