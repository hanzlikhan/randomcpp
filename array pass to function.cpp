#include <iostream>
using namespace std;
fn(int arr[]){
	int even=0;
	for(int j=1;j<10;j++)
	if(j%2==0)
	even++;
	return even;
	
	
	
}


int main(){
int n;

int arr[10];
for(int i=0; i<10;i++)
cin>>arr[i];
n=fn(arr);
cout<<"array contain"<<n<<"even number"<<endl;
}
