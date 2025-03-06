/* 5. Program to print the elements of an array. */

#include<iostream>
using namespace std;
int main(){
  int ar[]={1,2,3,4,5},l;
  l=sizeof(ar)/sizeof(int);
  cout<<"Elements of an array : ";
  for(int i=0;i<l;i++){
    cout<<ar[i]<<" ";
  }
  return 0;
  
  }

  /* Output:
  
  Elements of an array : 1 2 3 4 5 6 
   */