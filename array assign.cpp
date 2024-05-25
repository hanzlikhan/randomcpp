#include <iostream>
using namespace std;
void disp(int arr[5]){
	for(int i=0;i<5;i++){
    cout<<"students"<<i+1<<":"<<arr[i]<<endl;
	}
}
int main(){
	int arr[5]={13,45,65,23,12};
	disp(arr);
}

