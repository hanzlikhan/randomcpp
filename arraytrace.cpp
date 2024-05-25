#include <iostream>
using namespace std;
int mian(){
	int a[6],k,i;
	for(k=0;k<=4;k+=2){
		a[k]=k;
		a[k+1]=k-1;
		
	}
	for(i=5;i>=0;i--)
	cout<<a[i]<<i<<endl;
}
