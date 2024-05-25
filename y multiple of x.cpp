#include <iostream>
using namespace std;
int mul(int a,int b){

if(b%a==0)
return 1;
else
return 0;

}
int main(){

int x,y,r;
for(int i=1;i<=5;i++)
{
	cin>>x>>y;
	r=mul(x,y);
	if(r==1)
	cout<<y<<"is multiple of"<<x<<endl;
	else
	cout<<y<<"is not multiple of"<<x<<endl;
}
}
