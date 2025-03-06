/* 20. Program to Find Smallest Number in an array. */

#include<iostream>

using namespace std;

int main(){

  int arr[]={113, 18, 57, 80, 40, 76, 96 };
  int small=arr[0];
  cout<<"Array : "<<endl;

  int l=sizeof(arr)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";
  }
  for(int i=0;i<l;i++){
    if(small>arr[i]){
      small=arr[i];}
  }
  cout<<endl<<"Smallest number in array : "<<small; 
  return 0;
  }

  /* Output :
  
  Array : 
 113 18 57 80 40 76 96 
 Smallest number in array : 18
  
  */
