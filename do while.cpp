#include <iostream>
using namespace std;

int main() {
    double sum=0.0;
    int n;
    cin>>n;
    int i=1;
    do{
    	sum+=1.0/i;
    	i+=4;
	}while(i<=n);
	cout<<sum;
}

