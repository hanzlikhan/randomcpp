#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	int even=0;
	// take input
	
	for(int i=0; i<10; i++){
	
	
	cout<<"enter number"<<i+1<<endl;
	cin>>arr[i];
	// even number to even variable
	if(i%2==0){
	
	even=even+arr[i];
}
}
	// odd indexed number 
	cout<<"odd index element"<<endl;
	for(int i=1; i<10; i=i+2)
	cout<<arr[i];
	//print even element stored in number 
	cout<<"even element stored in number "<<even<<endl;
}
