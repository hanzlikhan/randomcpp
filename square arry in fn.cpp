#include <iostream>
using namespace std;
void square(int n){
	cout<<n<<"\t"<<n*n<<endl;
}
int main(){
	int arr[5];
	cout<<"enter 5 numbers"<<endl;
	for(int i=0;i<5;i++)
	cin>>arr[i];
	cout<<"caling fn";
	for(int i=0;i<5;i++)
	square(arr[i]);
	
	
}
