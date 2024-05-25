
//#include <iostream>
//using namespace std;
//int main(){
//	int n, sum=0;
//	cout<<"enter a positive integer";
//	cin>>n;
//	
//	for(int i=1; i<=10; i++){
//		cout<<i<< " ";
//		sum=sum + 1;
//	}
//	cout<<sum<<endl;
	
//}
#include <iostream>
using namespace std;
int main(){
	int num, f=0;
	cout<<"enter a number";
	cin>>num;
	for(int a=1; a<=100; a++){
		if(num % a==0){
		f++;
	}
	}
	if(f==2)
	{ 
	cout<<"entered number is prime number";
	
	}
	else {
		cout<<"entered number is not prime number ";
	}
}
