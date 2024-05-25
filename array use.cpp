#include <iostream>
using namespace std;
void display(int num[10]){
	for(int i=0;i<10;i++){
		cin>>num[i];
	}
	for(int i=0;i<10;i++){
		cout<<num[i]<<endl;
	}
}
int main(){
	int num[10];
	display (num);
}
