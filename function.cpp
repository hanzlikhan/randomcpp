#include <iostream>
using namespace std;
int main(){

int size=10;
int arr[size];
for(int i=1;i<size;i++)
cin>>arr[i];

for(int i=1;i<size;i++){

if(arr[i]%i==0)
cout<<"not prime";
exit(0);
}
cout<<"prime";
}
