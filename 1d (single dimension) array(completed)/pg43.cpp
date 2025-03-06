/* 43. Write a C++ Program to Search Key Elements in an Array.  */

#include<iostream>

using namespace std;

int main(){

  int ar[]={12,21,35,63,68,89,27,91};
  int n;
  cout<<"Array : "<<endl;
  int l=sizeof(ar)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<ar[i]<<" ";  
  }
  cout<<endl<<"Enter the element you want to check in array : ";
  cin>>n;
  int i;
  for(i=0;i<l;i++){
     if(ar[i]==n){
       cout<<"Key Element found in array at index "<<i;
       break;
     }
  }

  if(i==l){
  cout<<"Key Element not found in array ";
  }  
  return 0;
  
  }

/* Output : 

    Array : 
    12 21 35 63 68 89 27 91 
    Enter the element you want to check in array : 27
    Key Element found in array at index 6

*/