#include <iostream>
using namespace std;
void fn(int x){
	int fact=1;
	for(int i=1;i<=x;i++)
	fact*=i;
	cout<<"factorial :"<<fact;
	
}
int main(){
	int a;
	cin>>a;
	fn(a);
	
}
