#include<iostream>
using namespace std;
int main(){
	unsigned long n,i;
	cin>>n;
	for(i=2;i<=n/2;i++)
	
	if(n%i==0){
	
	cout<<"not prime"<<endl;
exit(0);
}
	
	cout<<"prime";

}
