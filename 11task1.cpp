#include <iostream>
using namespace std;
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};// part a
	cout<<"actual order "<<endl;  // part b
	  for(int i=0;i<=9;i++)
	    cout<<arr[i]<<"\t";
	cout<<endl;
	cout<<"reverse order";   // part c
	cout<<endl;
	  for(int i=9;i>=0;i--)
	    cout<<arr[i]<<"\t";
	cout<<endl;
	cout<<"part d"<<endl;
	int brr[10];    // part d
	  for(int i=0;i<=9;i++)
	    brr[i]=arr[i];
	cout<<"brr elements"<<endl;    
	  for( int i=0;i<=9;i++)
	  cout<<brr[i]<<"\t";
	  cout<<endl;
	int crr[10];
	//part e//
	 for(int i=0;i<=9;i++)
	    crr[i]=brr[i]+arr[i];
	cout<<"crr elements"<<"\t"<<endl;
	 for(int i=0;i<=9;i++)
	    cout<<crr[i]<<"\t";
	    cout<<endl;
    //part f//
	int drr[10];
	cout<<"drr elements"<<endl;
	 for(int i=9;i>=0;i--)
	 drr[9-i]=arr[i];
	 for(int i=0;i<=9;i++)
	 cout<<drr[i]<<"\t";
}
