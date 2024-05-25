#include <iostream>
using namespace std;
void fn(int n){
	int c=0;
	for(int i=2;i<=n;i++){
	
	if(n%i==0)
	c=1;
}
if(n%2==0 && c==0)
cout<<"prime and even"<<endl;
else if(n%2!=0 && c==0)
cout<<"prime and odd"<<endl;
else if(n%2==0 && c!=0)
cout<<"not prime and even"<<endl;
else 
cout<<"not prime and odd"<<endl;
}
	int main(){
		int n;
		cout<<"enter a number :";
		cin>>n;
		fn(n);
	}
