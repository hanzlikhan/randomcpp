#include <iostream>
using namespace std;
int main(){
	for(int i=1;i<=6;i++){
		for(int n=i;n>=1;n--)
		cout<<"  ";
		for(int n=1;n<=6+1-i;n++) 
		cout<<n<<" ";
		cout<<endl;
	}
}
