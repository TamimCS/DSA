#include<iostream>
using namespace std;
int main(){
int a[50],size;
cout<<"Enter array size: ";
cin>>size;
if (size>50)
{
cout<<"Overflow";
}else{

for (int i = 1; i <= size; i++)
{cout<<"Input Array element "<<i<<": ";
    cin>>a[i];
}
cout<<"Showing array element : ";
for (int i = 1; i <=size; i++)
{
    cout<<"\t"<<a[i];
}}


}
