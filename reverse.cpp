#include <iostream>
using namespace std;
int main(){
	int num[5];
	for(int i=0;i<5;i++){
		cin>>num[i];
	}
		cout<<"\n array in actual order\n";
		for(int i=0;i<5;i++){
			cout<<num[i];
		}
		cout<<"\n rverse";
		for(int i=4;i>=0;i--)
		cout<<num[i];
	}

