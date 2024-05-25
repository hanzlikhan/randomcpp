#include <iostream>
using namespace std;
int main(){
	int age[150];
	int n,count=0;
	cout<<"enter number of persons"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>age[i];
		if(age[i]>50&&age[i]<60)
		count+=1;
		
	}
	cout<<count<<"persons are between 50 and 60";
	
}
