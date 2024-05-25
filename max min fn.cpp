#include <iostream>
using namespace std;
void fn(int a,int b){
    if(a>b)
        cout<<"maximum"<<endl;
    
    else
        cout<<"minimum"<<endl;
    
   
}
int main(){
    int x,y;
    cin>>x>>y;
    fn(x,y);
}
