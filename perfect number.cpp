#include <iostram>
using namespace std;
int main(){
	int num,mid,sum=0;
	cin>>num;
	mid=num/2;
	for(int i=1;i<=mid;i++){
	
	if((num%i)==0)
	sum=sum+i;
}
if(sum==num) 
cout<<num<<"is a perfect number";
else
cout<<num<<"is a perfect number";
}
