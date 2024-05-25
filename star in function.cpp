#include <iostream>
using namespace std;
void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
int main(){
int num1,num2;
cin>>num1>>num2;
cout<<"before swap"<<"num1 is:"<<num1<<" "<<"num 2:"<<num2<<endl;
swap(num1,num2);
cout<<"after swap"<<"num1 is"<<num1<<" "<<"num 2 :"<<num2<<endl;


}
