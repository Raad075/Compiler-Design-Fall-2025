#include<iostream>
using namespace std;

void MinMax(int arr[],int n,int &minVal,int &maxVal){

minVal= arr[0];
maxVal = arr[0];


for (int i =1; i<n; i++){

     if(arr[i] < minVal)
          minVal = arr[i];

     if(arr[i]>maxVal)
          maxVal = arr[i];
}
}

int main(){
int n;
 cout<<"Enter Elements: ";
 cin>>n;

 int arr[n];
 cout<<"Enter"<<n<<"Elements";

 for(int i=0;i<n;i++){

     cin>>arr[i];
 }

int minVal,maxVal;

MinMax(arr,n,minVal,maxVal);
cout<<"Minimum Value: " <<minVal<<endl;
cout<<"Maximum Value: "<<maxVal<<endl;
return 0;




}






