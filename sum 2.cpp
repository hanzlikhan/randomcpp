#include<iostream>
using namespace std;
int product(int x,int y){
	int z=x*y;
	return z;
}
int main(){
	int a,b;
	cin>>a>>b;
	int result=product(a,b);
	cout<<result;
}



