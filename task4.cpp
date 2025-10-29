#include<iostream>
using namespace std;


bool isIdentifier(string a){

if(!(isalpha(a[0]) || a[0]== '_')){
     return false;
}
for (int i =1; i<a.length();i++){
  if(!(isalnum(a[i]) || a[i]=='_')){
   return false;
}
}
return true;
}














int main(){
string a;
cout<<"Enter Identifier: ";
cin>>a;

if(isIdentifier(a))
     cout<<"Valid"<<endl;
else

cout<<"Invalid"<<endl;
return 0;


}
