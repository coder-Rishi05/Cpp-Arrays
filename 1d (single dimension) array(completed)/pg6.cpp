/* 6. Program to print the elements of an array in reverse order */

#include<iostream>
using namespace std;
int main(){
  int ar[]={1,2,3,4,5},l;
  l=sizeof(ar)/sizeof(int);
  cout<<"Array : ";
  for(int i=0;i<l;i++){
     cout<<ar[i]<<"  ";
  }  
  cout<<endl<<"Elements of an array in reverse order : ";
  for(int i=l-1;i>=0;i--){
    cout<<ar[i]<<" ";
  }
  return 0;
  
  }

  /* Output:
  Array : 1  2  3  4  5   
  Elements of an array in reverse order : 5 4 3 2 1 
  
   */