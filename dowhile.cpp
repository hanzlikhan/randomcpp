#include <iostream>
using namespace std;
int main(){
	int grade;
	for(int i = 0; i<3; i++){
	
	do{
		cout<<"enter grade "<<i+1<<" :";
		cin>>grade;
		
	}while(grade<1 || grade>5);
}
}
