#include<iostream>
using namespace std;
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int brr[10];
	for(int i=0;i<10;i++)
	
		cout<<arr[i];
	cout<<"number are :";
	for(int i=0;i<10;i++)
	cout<<arr[i]<<" ";
	cout<<"number in reverse order :";
	for(int i=9;i>=0;i--)
	cout<<arr[i]<<" ";
	cout<<"number in second array :";
	for(int i=0;i<10;i++)
	brr[i]=arr[i];
	cout<<brr[i];
}
