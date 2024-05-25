#include <iostream>
using namespace std;
void input(int arr[],int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}
int output(int arr[],int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int arr[5];
	input(arr,5);
	cout<<"max value in arry"<<output(arr,5);
}
