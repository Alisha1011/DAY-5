#include<iostream>
using namespace std;
int main()
{
	int num,rem,res,n;
	cout<< " enter the number :";
	cin>>num;
	num=n;
	while(n!=0)
	{
	    rem=n%10;
    	res+=rem*rem*rem;
    	n/=10;
    }
    if(res=num)
      cout<<" is arm strong number "<<num;
    else
       cout<< " is not arm strong number "<<num;
	
	
}
