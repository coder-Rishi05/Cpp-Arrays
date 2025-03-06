/* 22. Program to Print Odd and Even Numbers from an array. */

#include<iostream>

using namespace std;

int main(){

  int arr[]={11,52,13,436,18,99,66,53,100,102,142};
  cout<<"Array : "<<endl;
  int l=sizeof(arr)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";
  }

  cout<<endl<<"Even numbers of array : "<<endl;
  for(int i=0;i<l;i++){
    if(arr[i]%2==0){
    cout<<arr[i]<<" ";}
  } 

  cout<<endl<<"Odd numbers of array : "<<endl;
  for(int i=0;i<l;i++){
    if(arr[i]%2!=0){
    cout<<arr[i]<<" ";}
  }

  return 0;
  }

  /*  Output: 
Array : 
11 52 13 436 18 99 66 53 100 102 142 
Even numbers of array : 
52 436 18 66 100 102 142 
Odd numbers of array : 
11 13 99 53 

  */
