/* 7. Program to print the elements of an array present on even position. */

#include<iostream>
using namespace std;
int main(){
  int ar[]={1,2,3,4,5,6},l;
  l=sizeof(ar)/sizeof(int);
  cout<<"Array : ";
  for(int i=0;i<l;i++){
     cout<<ar[i]<<"  ";
  }  
  cout<<endl<<"Elements of an array present on even position : ";
  for(int i=0;i<l;i++){
    if(((i+1)&1)==0){
    cout<<ar[i]<<" ";
  }}
  return 0;}

  /* Output:
  
  Array : 1  2  3  4  5  6  
  Elements of an array present on even position : 2 4 6 
  
   */