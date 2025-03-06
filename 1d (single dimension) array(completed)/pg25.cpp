/* 25. Write a C++ program to sum values of an array. */

#include<iostream>

using namespace std;

int main(){
  
  int arr[]={11,22,43,26,58,79,37,91};
  int s=0;
  cout<<"Array : ";
  int l=sizeof(arr)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";  
  }
  for(int i=0;i<l;i++){
     s=s+arr[i];
  } 
  cout<<endl<<"Sum of all values of array : "<<s<<endl;
  return 0;
  }

  /* Output:
  
  Array : 11 22 43 26 58 79 37 91 
  Sum of all values of array : 367
  
   */
