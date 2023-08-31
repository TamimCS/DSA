#include<iostream>
using namespace std;

 int main(){
//simple array insertion

 /*   
int arr[50],size,i,elem;
cout<<"Enter Array size: ";
cin>>size;
cout<<"Enter Array element: "<<endl;
for ( i = 0; i < size; i++)
{
cin>>arr[i];
}
cout<<"enter new element to insert : "<<endl;
cin>>arr[i];

cout<<"New array is: \t ";
for ( i = 0; i <=size; i++)
{
    cout<<arr[i]<<" ";
}*/

//Array insertion at specific position
int arr[50],size,i,elem,pos;
cout<<"Enter Array size: ";
cin>>size;
cout<<"Enter Array element: "<<endl;
for ( i = 0; i < size; i++)
{
cin>>arr[i];
}
cout<<"Enter the position of new Array: "<<endl;
cin>>pos;
cout<<"Enter the new element of new Array: "<<endl;
cin>>elem;
for( i = size-1; i >=pos-1 ; i--)
{
    arr[i+1]=arr[i];
}
arr[pos-1]= elem;
size++;
for (  i = 0; i <size; i++)
{
    cout<<"\t"<<arr[i];
}
return 0;
}
