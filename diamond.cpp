#include <iostream>
using namespace std;
int main(){
	for(int i=1; i<=5; i++){
		for(int k=1;k<=5-i;k++){
			cout<<" ";
		}
			for(int j=1;j<=i*2-1;j++){
			
			cout<<"*";
		}
cout<<endl;
	}
for(int i=4;i>=1; i--){
	for(int k=1; k<=5-i; k++)
	cout<<" ";
	for(int j=1;j<=2*i-1;j++){
	cout<<"*";

        }
cout<<endl;
}
}
