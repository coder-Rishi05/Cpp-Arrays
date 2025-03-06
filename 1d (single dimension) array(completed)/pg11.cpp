/* 11. Program to print the number of elements present in an array. */

#include<iostream>

using namespace std;

int main(){
  int ar[]={121,1021,21,413,11,1,101},num;
  num=sizeof(ar)/sizeof(int);
  cout<<"Array : ";
  for(int i=0;i<num;i++){
     cout<<ar[i]<<"  ";
  }  
  cout<<endl<<"No. of element in an array : "<<num;
  return 0;
  }

  /*  Output:
  Array : 121  1021  21  413  11  1  101  
  No. of element in an array : 7
  */