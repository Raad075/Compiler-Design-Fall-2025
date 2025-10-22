#include<iostream>
using namespace std;

bool isOperator(char a){
if (a =='+'||a=='-'||a=='*'||a=='/'||a=='%'||a=='=')
    return true;
else
    return false;


}
int main(){
string a;
cout<<"Expression: ";
cin>>a;

int Count =0;
for(int i=0; i<a.length();i++){
    if(isOperator(a[i])){
        Count++;
        cout<<"Operator"<<Count<<":"<<a[i]<<endl;

    }
}
if(Count ==0)
    cout<<"Not Found"<<endl;
return 0;
}
