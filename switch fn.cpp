#include <iostream>
using namespace std;
void cal(int a,int b,char op)
{
	switch(op)
	{
		case '+':
			cout<<a<<"+"<<b<<"="<<a+b;
			break;
			case '*':
			cout<<a<<"*"<<b<<"="<<a*b;
			break;
			case '/':
			cout<<a<<"/"<<b<<"="<<a/b;
			break;
			case '-':
			cout<<a<<"-"<<b<<"="<<a-b;
			break;
	}
}
int main(){
	int x,y;
	char z;
	cin>>x>>y>>z;
	cal(x,y,z);
}
