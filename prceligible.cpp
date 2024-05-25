#include <iostream>
using namespace std;
bool eligible(int age){
	return age>=18;
}
int main(){
	int age;
	cin>>age;
	if(eligible(age)){
		cout<<"is eligible for vote"<<endl;
		
	}
	else
	cout<<"not eligible for vote"<<endl;
}
