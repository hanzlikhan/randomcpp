#include <iostream>
using namespace std;

int main()
{
  int x, sum=0;
  cin>>x;
  for(int i=1; i<=x; i++){
  cout<<2*i-1<<" ";
  sum+=2*i-1;
}
  
  
 
  cout<<sum<<endl;
}
