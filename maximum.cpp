#include<iostream>
using namespace std;
int main(){
	int arr[10],max;
	for(int i=0;i<10;i++)
	cin>>arr[i];
	max=arr[0];
	for(int i=0;i<10;i++)
	if(max<arr[i]) //for minimum just condition will be change in the program,
	max=arr[i];
	cout<<max;
}
