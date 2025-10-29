#include<iostream>
using namespace std;

double Average(int arr[], int n){

int sum = 0;
for (int i=0; i<n; i++){
     sum+= arr[i];
}
return (double)sum/2;

}

int main(){
     int n;
     cout<<"Enter elements: ";
     cin>>n;

     int arr[n];

     cout<<"Enter " <<n<< "Elements: ";
     for(int i=0; i<n; i++){

          cin>>arr[i];
     }
double average = Average(arr, n);
cout<<"Average Value: "<<average<<endl;

return 0;



}

