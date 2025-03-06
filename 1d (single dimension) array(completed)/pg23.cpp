/* 23. Write a C++ program to swap the first and last elements of an array and create a new array. */

#include<iostream>

using namespace std;

int main(){
  int arr[]={19,42,53,26,28,19,10,11};
  cout<<"Array Elements : "<<endl;
  int l=sizeof(arr)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";

  }

  int  nar[l];
  int temp=arr[0];
  arr[0]=arr[l-1];
  arr[l-1]=temp;
  for(int i=0;i<l;i++){
    nar[i]=arr[i];
  } 
  cout<<endl<<"New array after swapping first and last elements : "<<endl;
  for(int i=0;i<l;i++){
    cout<<nar[i]<<" ";
  }
  return 0;
  
  }

  /* output:

     Array Elements: 
     19 42 53 26 28 19 10 11 
     New array after swapping first and last elements : 
     11 42 53 26 28 19 10 19 

  */
