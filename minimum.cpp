#include <iostream>
using namespace std;
int findmini(int num1,int num2,int num3){
	int min=num1;
	if(num2<min){
	
	min=num2;
}
if(num3<min){
	min=num3;
}
return min;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int minimum=findmini(a,b,c);
	cout<<"minimum"<<minimum;
}
