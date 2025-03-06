/*  9. Program to print the largest element in an array. */

#include<iostream>
using namespace std;
int main(){
  int arr[]={100,201,116,14,1003,125},l,largest;
  l=sizeof(arr)/sizeof(int);
  largest=arr[0];
  for(int i=0;i<l;i++){
    if(largest<arr[i]){
      largest=arr[i];
  }}
  cout<<"Array : ";
  for(int i=0;i<l;i++){
     cout<<arr[i]<<"  ";
  }  
  cout<<endl<<"Largest element in an array : "<<largest;
  return 0;
  
  }

  /* Output:

  Array : 100  201  116  14  1003  125  
  Largest element in an array : 1003

   */