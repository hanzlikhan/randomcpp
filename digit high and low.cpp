#include <iostream>
using namespace std;
int main(){
	int s;
	cin>>s;
	int high=s%10,low=s%10;
	int num=s;
	
	for(int i=s;i>=1;i=i/10)
	{
		int rem;
		rem=i%10;
		if(rem>high)
		high=rem;
		if(rem<low)
		low=rem;
	}
	cout<<"\n"<<num<<"high is"<<high;
	cout<<"\n"<<num<<"low is"<<low;
}
	
