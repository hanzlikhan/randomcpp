#include <iostream>
using namespace std;
void check(int x){
	int c=0;
	for(int i=2;i<=x;i++){
	
	if(x%i==0)
	c=1;
}
if(x%2==0&&c==0)
cout<<x<<"is prime even";
else if(x%2!=0 && c==0)
cout<<x<"is prime and odd";
else if(x%2==0&&c!=0)
cout<<x<<"is not prime and even";
else
cout<<"is not prime and odd";
}
int main(){
	int num;
	cin>>num;
	check(num);
}

