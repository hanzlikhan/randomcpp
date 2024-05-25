#include <iostream>
using namespace std;
void fn(int x){
	for(int i=1;i<=10;i++){
		cout<<x<<"*"<<i<<"="<<x*i<<endl;
	}
}

int main(){
	int num;
	cin>>num;
	fn(num);
}
