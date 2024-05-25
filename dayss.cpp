#include<iostream>
using namespace std;
int main(){
	int days_per_month[12]={31,28,31,30,31,30,31,30,31,30,31,30};
	int month;
	cin>>month;
	int days;
	cin>>days;
	int total=days;
	for(int i=0;i<=month-1;i++)
	total+=days_per_month[i];
	cout<<"days"<<total;
}
