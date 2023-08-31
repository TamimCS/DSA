#include <iostream>
using namespace std;
int main(){
  int arr[50],size,i,key;
cout<<"Enter the size of Array: "<<endl;
cin>>size;
cout<<"Enter The Array Element: "<<endl;
for( i = 0; i<size; i++)
{
    cin>>arr[i];
}
 cout<<"Enter the Key you wanna search:"<<endl;
  cin>>key;
   cout << "The original array elements are : " <<endl;
   for(i = 0; i<size; i++) {
      cout << "LA[" << i << "] = " << arr[i] << endl;
   }
   for(i = 0; i<size; i++) {
      if( arr[i] == key ) {
         cout << "Found element " << key << " at position " << i+1 <<endl;
      }
   }
   return 0;
}
