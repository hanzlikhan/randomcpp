#include <iostream>
using namespace std;
void swap(int &x,int &y){
	int t;
	t=x;
	x=y;
	y=t;
}
int mian(){
	int a,b;
	cin>>a>>b;
	cout<<a<<endl;
	cout<<b<<endl;
	
	swap(a,b);
	cout<<"after swapping:"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	
		
	
}
