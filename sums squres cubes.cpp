#include <iostream>
using namespace std;
int main(){
	const int size=5;
	int numbers[size];
	int squares[size];
	int cubes[size];
	int sums[size];
	for(int i=1;i<=size;i++){
	
	numbers[i]=i;
	squares[i]=i*i;
	cubes[i]=i*i*i;
	sums[i]=numbers[i]+squares[i]+cubes[i];
}
cout<<"number is\t:";
for(int i=1;i<=size;i++){
	cout<<numbers[i]<<"\t";
}
cout<<"squares is \t:";
for(int i=1;i<=size;i++){
	cout<<squares[i]<<"\t";
}
cout<<"cubes is \t:";
for(int i=1;i<=size;i++){
	cout<<cubes[i]<<"\t";
}
int total=0;
cout<<"sums is \t:";
for(int i=1;i<=size;i++){
	cout<<sums[i]<<"\t";
	total=total+sums[i];
}
cout<<endl;
}
