/* 10. Program to print the smallest element in an array */

#include<iostream>
using namespace std;
int main(){
  int arr[]={126,222,100,4001,2213,95},l,small;
  l=sizeof(arr)/sizeof(int);
  small=arr[0];
  for(int i=0;i<l;i++){
    if(small>arr[i]){
      small=arr[i];
  }}
  cout<<"Array : ";
  for(int i=0;i<l;i++){
     cout<<arr[i]<<"  ";
  }  
  cout<<endl<<"Smallest element in the array : "<<small;
  return 0;
  }

  /* Output :
  
  Array : 126  222  100  4001  2213  95  
  Smallest element in the array : 95
  
  */