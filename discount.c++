#include<iostream>
using namespace std;
int main()
{
	int qty,dis=0;
	float total,rate ;	
	cout<<"\n Quantity of item = ";
	cin>>qty;	
	cout<<"\n Rate of item =";
	cin>>rate;	
	if(qty>1000)
	dis=10;
	total=(qty*rate)-(qty*rate*dis/100);
	cout<<" the total expensive :"<<total<<endl;
}
