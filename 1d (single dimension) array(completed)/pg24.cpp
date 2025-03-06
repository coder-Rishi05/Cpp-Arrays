/* 24. Write a C++ program to count the number of even and odd elements in a given array. */

#include<iostream>

using namespace std;

int main(){
  int ar[]={13,12,10,36,48,91,27,11};
  int e=0,o=0;
  cout<<"Array : ";
  int l=sizeof(ar)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<ar[i]<<" ";  
  }
  for(int i=0;i<l;i++){
    if(ar[i]%2==0){
    e++;}
    else{
      o++;
    }
  } 
  cout<<endl<<"No. of even elements in array : "<<e<<endl;
  cout<<"No. of odd elements in array : "<<o<<endl;
  return 0;
  }

/* Output:
        Array : 13 12 10 36 48 91 27 11 
        No. of even elements in array : 4
        No. of odd elements in array : 4
*/