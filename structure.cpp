#include<iostream>
using namespace std;
struct book
{
	int id;
	int pages;
	float price;
	
};
int main(){
	book b1,b2;
	cout<<"enter id,pages and price of book"<<endl;
	cin>>b1.id>>b1.pages>>b1.price;
	cout<<"enter id ,pages and price of book 2"<<endl;
	cin>>b2.id>>b2.pages>>b2.price;
	if(b1.price>b2.price){
	
	cout<<"bookid"<<b1.id<<endl;
	cout<<"bookpages"<<b1.pages<<endl;
    cout<<"bookprice"<<b1.price<<endl;
}
else
{
	cout<<"bookid"<<b2.id<<endl;
	cout<<"bookpages"<<b2.pages<<endl;
    cout<<"bookprice"<<b2.price<<endl;
}


}
