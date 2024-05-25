#include "iostream"
using namespace std;
int gcd(int x,int y)
{
	int g,n;
	if(x<y)
	n=x;
	else
	n=y;
	for(int i=1; i<=n;i++)
	if(x%i==0 && y%i==0)
	g=i;
	return g;
	
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"greatest common divisor is "<<gcd(a,b)<<endl;
}
