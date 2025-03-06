/* 30. Write a C++ program to insert an element (specific position) into an array.  */

#include<iostream>

using namespace std;

int main(){
      int arr[10]={11,22,33,56,88,99,77,110};
      cout<<"Array : ";
      int l=8;
      int n,p;
      for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";  
      }
          cout<<endl<<"Enter the number you want to insert : ";
          cin>>n;
          cout<<"Enter the position : ";
          cin>>p;
      if(p>0 && p<l+1){
      for(int i=l;i>p-1;i--){
        arr[i]=arr[i-1];
      }  
      arr[p-1]=n;
      l++;
      cout<<"After insertion array : "<<endl;
      for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";  
      }}
      else{
        cout<<"Invalid position for element ";
      }
  return 0;
  
  }

  /* Output: 
  Array : 11 22 33 56 88 99 77 110 
  Enter the number you want to insert : 32
  Enter the position : 4
  After insertion array : 
  11 22 33 32 56 88 99 77 110 
  
  */
