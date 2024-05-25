#include <iostream>
using namespace std;
int min(int a,int b,int c){

int mini=a;
if(mini>b){
	mini=b;
}
if(mini>c){
	mini=c;
}
return mini;
}
int main(){
	int x,y,z;
	cout<<"enter";
	cin>>x>>y>>z;
	int minimum=min(x,y,z);
	cout<<minimum;
}
