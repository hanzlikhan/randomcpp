#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cin>>x>>y>>z;
	int n=x+y+z;
		if(n%2==0){
		
		
	if(n<10)
	cout<<"less"<<endl;
	else if(n>10)
	cout<<"greater"<<endl;
	else 
	cout<<"equal"<<endl;
}
else if(n%2==1){
char t;
cin>>t;
switch(t){

case 'c':case 'C':
	cout<<"C++";
	break;
case 'p':
		cout<<"programming";
		break;
		case 'd':
			cout<<"developer";
			break;
			default:
				cout<<"invalid";
			}
		}
}
