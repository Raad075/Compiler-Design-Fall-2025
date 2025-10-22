#include<iostream>
using namespace std;

bool isNum(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] < '0' || s[i] > '9'){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if(isNum(s))
        cout << "Numeric constant" << endl;
    else
        cout << "Not numeric" << endl;

    return 0;
}
