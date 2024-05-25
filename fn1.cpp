#include<iostream>
using namespace std;
void print(int arr[],int size=10)
{
	int min=arr[0];
	for(int i=0;i<=0;i++){
		if(min>arr[i])
		min=arr[i];
	}
	cout<<min;
}
void input(int arr[],int size=10)
{
	for(int i=0;i<size;i++)
	cout<<arr[i];
}
int main(){
	int arr[10];
	input(arr,10);
	print(arr,10);
}
