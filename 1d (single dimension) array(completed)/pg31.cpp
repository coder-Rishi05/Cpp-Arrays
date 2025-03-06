/* 31. Write a C++ program to reverse an array of integer values. */

#include<iostream>

using namespace std;

int main(){
      int arr[]={11,21,33,66,18,69,37,11};
      int l=sizeof(arr)/sizeof(int);
      cout<<"Array : ";
      for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";  
      }
  int temp;
      for(int i=0;i<l/2;i++){
        temp=arr[i];
        arr[i]=arr[l-i-1];
        arr[l-i-1]=temp;
      } 
        cout<<endl<<"Array after reverse : "<<endl;
        for(int i=0;i<l;i++){
          cout<<arr[i]<<" ";  
        }
  return 0;

  }

  /*Output: 
  Array : 11 21 33 66 18 69 37 11 
  Array after reverse : 
  11 37 69 18 66 33 21 11 
  
  */
