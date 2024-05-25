#include <iostream>
using namespace std;
int main(){
	int n,s=1;
	cin>>n;
	cout<<"product of component of n are\n"<<n<<endl;
	for(int i=n;i>=s;i--)
	for(int j=1;j<=n;j++)
	{
		if(i*j==n)
		{
			cout<<i<<"*"<<j<<endl;
			s=j+1;
		}
	}
}
