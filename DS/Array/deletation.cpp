#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[50],size,i,pos,elem;
cout<<"Enter the size of Array: "<<endl;
cin>>size;
cout<<"Enter The Array Element: "<<endl;
for( i = 0; i<size; i++)
{
    cin>>arr[i];
}
cout<<"Enter the position of deletation element: "<<endl;
cin>>pos;
for ( i = pos-1; i < size-1; i++)
{
    arr[i]=arr[i+1];
}
size--;
for ( i = 0; i <size; i++)
{
    cout<<"\t "<<arr[i];
}
return 0;
}
