#include <iostream>
using namespace std;
int main(){
int num,factorial=1;
cin>>num;
for(int a=1;a<=num;a++){
	factorial=factorial*a;
	cout<<factorial;
}
}
