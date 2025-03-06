/* 12. Program to print the sum of all the items of the array. */

#include<iostream>

using namespace std;

int main(){
  int ar[]={61,12,1,4,3,35},a,sum=0;
  a=sizeof(ar)/sizeof(int);
  cout<<"Array : ";
  for(int i=0;i<a;i++){
     cout<<ar[i]<<"  ";
  }  
 for(int i=0;i<a;i++){
     sum=sum+ar[i];
  }
  cout<<endl<<"Sum of all items in an array : "<<sum;
  return 0;

  }

  /* Output :
  Array : 61  12  1  4  3  35  
 Sum of all items in an array : 116
  
  */