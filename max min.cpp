#include<iostream>
#include<algorithm>
using namespace std;
int findmax(int num1,int num2,int num3){
int max=num1;
if(num2>max){
	max=num2;
}
if(num3>max){
	max=num3;
}
return max;
}
int findmin(int num1, int num2, int num3){
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
int num1,num2,num3;
	cout<<"enter three numbers";
	cin>>num1>>num2>>num3;
	int maxnum=findmax(num1,num2,num3);
	int minnum=findmin(num1,num2,num3);
	cout<<"max is"<<maxnum;
	cout<<"min is"<<minnum;
}
