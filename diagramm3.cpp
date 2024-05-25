#include <iostream>
using namespace std;
int main(){
	for(int i=1;i<=6;i++){
		for(int n=i;n>1;n--)
		cout<<" ";
		for(int k=1;k<=6+1-i;k++) //if we use another loop name then it will genrate diferent.
		cout<<k<<" ";
		cout<<endl;
	}
}
