#include <iostream>
using namespace std;
int main(){
	int arr[10]={10,20,30,40,50,60,70,80,90,100}; //part a
	for(int i=0;i<10;i++){
	
	cout<<"numbers:"<<arr[i]<<endl; // part b
}
cout<<"reverse order"; //part c
for(int i=9;i>=0;i--)

cout<<arr[i]<<" ";

int brr[10]; //part d
for(int i=0;i<10;i++){


brr[i]=arr[i];
}
cout<<"brr element"<<endl;
for(int i=0;i<10;i++){

cout<<brr[i]<<" ";
}
cout<<endl;

int crr[10]; //part e

for(int i=0;i<10; i++)

crr[i]=arr[i]+brr[i];

cout<<"sum"<<"\t"<<endl;
for(int i=0;i<10; i++)

cout<<crr[i]<<" ";


cout<<endl;
int drr[10]; //part f
cout<<"drr element"<<endl;
for(int i=9;i>=0;i--)
drr[9-i]=arr[i];
for(int i=0;i<10;i++)
cout<<drr[i]<<" ";
cout<<endl;

// part g

for(int i=0;i<10;i++)
cout<<arr[i]<<endl<<drr[i]<<endl;
}
