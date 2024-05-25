#include <iostream>
using namespace std;
int main(){
	int min,max;
	int arr[2][4]={{23,12,44,32,},{25,65,21,10}};
	max=min=arr[0][0];
	for(int i=0;i<2;i++)
	
		for(int j=0;j<3;j++){
		
		if(arr[i][j]>max)
		max=arr[i][j];
		if(arr[i][j]<min)
		min=arr[i][j];
	}
	cout<<"maximum is "<<max<<endl<<"minimum is"<<min<<endl;
}
