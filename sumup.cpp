#include <iostream>
using namespace std;
int main(){
	int num1,r,sum=0;
	cin>>num1;
	while(num1>0)
	{
		r=num1%10;
		num=num/10;
		sum=sum+r;
		cout<<"sum is:"<<sum;
	}
}
