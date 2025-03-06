/* 16. Program to Find 3rd Largest Number in an array. */

#include<iostream>
using namespace std;
int main(){
  int ar[]={322,128,57,862,552,76,6};
  int lrt=ar[0],lrt2=lrt,lrt3=lrt;
  cout<<" Given Array  : "<<endl;
  int l=sizeof(ar)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<ar[i]<<" ";
  }
  for(int i=0;i<l;i++){
    if(lrt<ar[i]){
      lrt2=lrt;
      lrt=ar[i];}
    if(lrt2<ar[i] && ar[i]<lrt){
      lrt3=lrt2;
      lrt2=ar[i];
      }
    if(lrt3<ar[i] && ar[i]<lrt2){
       lrt3=ar[i];
    }
  }
  cout<<endl<<"Third largest in an array : "<<lrt3; 
  return 0;}

/* Output:

 Given Array  : 
  322 128 57 862 552 76 6 
  Third largest in an array : 322

*/