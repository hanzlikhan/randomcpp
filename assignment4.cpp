#include<iostream>
using namespace std;
int main(){
	int A[3][3];
	int B[3][3];
	//taking input from user
	cout<<"enter the values for matrix A"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		cin>>A[i][j];
	}
	cout<<endl;
	//taking input from user 
	cout<<"enter the values for matrix B"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		cin>>B[i][j];		
	}
	cout<<endl;
	//Addition matrix A and B
	int C[3][3];
	cout<<"C=A+B"<<endl<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){		
		C[i][j]=A[i][j]+B[i][j];	
	cout<<C[i][j]<<"\t";
        }
	cout<<endl;
    }
    //subtraction matrix B from matrix A
     int D[3][3];
     cout<<"D=A-B"<<endl<<endl;
     
     for(int i=0; i<3;i++){
     	for(int j=0;j<3;j++){
     		D[i][j]=A[i][j]-B[i][j];
     		cout<<D[i][j]<<"\t";     		     		
		 }
		 cout<<endl;
	 }
	 //multiplication matrix A and matrix B
	 int E[3][3];
	 cout<<"E=A*B"<<endl<<endl;
	 for(int i=0;i<3;i++){
	 	for(int j=0;j<3;j++){
	 		E[i][j]=A[i][j]*B[i][j];
	 		cout<<E[i][j]<<"\t";
		 }
		 cout<<endl;
	 }
	 //transpose of matrix A
	 int F[3][3];
	 cout<<"tanspose of A"<<endl<<endl;
	 for(int i=0;i<3;i++){
	 	for(int j=0;j<3;j++){
	 		F[i][j]=A[i][j];	 					 
		 }
	 }
     for(int i=0;i<3;i++){
     	for(int j=0;j<3;j++){
     		cout<<F[i][j]<<"\t";
		 }
		 cout<<endl;
	 }
}
