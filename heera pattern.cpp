#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	n=k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		
		if(j>=k)
		cout<<"*";
		else 
		cout<<" ";
	}
	k--;
	cout<<endl;
	}
}
