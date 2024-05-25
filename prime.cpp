#include <iostream>
using namespace std;
int main(){
	int p=0;
	int arr[10];
	for(int i=0;i<10;i++)
	cin>>arr[i];
	for(int i=0;i<10;i++){
	
	if(arr[i]%i==0)
	p=1;
	cout<<"not prime";
	exit(0);
}
cout<<"prime number";
}
