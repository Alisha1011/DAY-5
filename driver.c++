#include<iostream>
using namespace std;
int main()
{

   char sex,ms;
   int age;
   cout<<" enter age :";
   cin>>age;
   cout<<" enter the sex :";
   cin>>sex;
   cout<<" enter the marital status :";
   cin>>ms;
   if (ms=='M')
   cout<<" the driver is insured";
  else
 {
   if (sex=='M')
   {
    if (age>30)
     cout <<" the driver is ensured :";
    else
     cout<<("Driver is not insured");
   }
 }
  else
 {
  if(sex=='f')
   {
    if (age>25)

      cout<<"Driver is insured";
    else
      cout<<"Driver is not insured";
   } 
  }
}
