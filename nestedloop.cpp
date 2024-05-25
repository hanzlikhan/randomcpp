#include <iostream>
using namespace std;
int main(){
	int grade,sum=0; //we can sum of all the grade , if we do so the we shoukd assign the value of sum =0
	for(int i = 0; i<3; i++){
	
	do{
		cout<<"enter grade "<<i+1<<" :";
		cin>>grade;
		
	}while(grade<1 || grade>5);
	sum += grade;
	
}
cout <<"sum="<<sum;
}
