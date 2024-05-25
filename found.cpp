#include <iostream>
using namespace std;
int main(){
	
	int size=10;
	int arr[size];
	for(int i=0;i<size;i++){
	
	cin>>arr[i];
}
cout<<"search value";
int searchvalue;
cin>>searchvalue;
bool found=false;
for (int i = 0; i < size; i++) {
	if(arr[i]==searchvalue){
	
	found=true;
	break;
}
}
if(found){
	cout<<searchvalue<<"was found in an array"<<endl;
}
else{
	cout<<searchvalue<<"was not found in array"<<endl;
}
}

