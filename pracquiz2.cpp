#include <iostream>
using namespace std;
int findmin(int arr[],int size){

int min=arr[0];
for(int i=0;i<size;++i){
	if(arr[i]<min){
		min=arr[i];
	}
}
return min;
}
int main(){
	int size=100;
	int arr[size];
	cout<<"enter "<<size<<"element"<<endl;
	for(int i=0;i<100;++i){
		cin>>arr[i];
		
	}
	int minimum= findmin(arr,size);
	cout<<"minimum is"<<minimum<<endl;
}
