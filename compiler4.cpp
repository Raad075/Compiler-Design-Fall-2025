#include <iostream>
#include <string>
using namespace std;

bool isSingleLineComment(string s) {

    return s.find("//") == 0;
}

bool isMultiLineComment(string s) {

    if (s.find("/*") == 0) {

        for (int i = 2; i < s.length() - 1; i++) {
            if (s[i] == '*' && s[i + 1] == '/') {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string input;

    cout << "Enter Line: ";
    getline(cin, input);

    if (isSingleLineComment(input)) {
        cout << " single line comment." << endl;
    } else if (isMultiLineComment(input)) {
        cout << "multi line comment." << endl;
    } else {
        cout << " not a comment." << endl;
    }

    return 0;
}
