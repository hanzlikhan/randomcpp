#include <iostream>
using namespace std;
void fn(int a,int b,char opr){
	switch(opr){
		case '+':
			cout<<a<<"+"<<b<<"="<<a+b;
			break;
			case '-':
			cout<<a<<"-"<<b<<"="<<a-b;
			break;
			case '*':
			cout<<a<<"*"<<b<<"="<<a*b;
			break;
			case '/':
			cout<<a<<"/"<<b<<"="<<a/b;
			break;
			default:
				cout<<"invalid operator";
	}
}
int main(){
	int x,y;
	char op;
	cin>>x>>y>>op;
	fn(x,y,op);
	
}
