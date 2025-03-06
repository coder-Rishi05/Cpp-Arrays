/* 18. Program to Find Largest Number in an array. */

#include<iostream>

using namespace std;

int main(){
  int array[]={113,108,1157,836,55,726,256};
  int largestnum=array[0];
  cout<<"Array numbers : "<<endl;
  int l=sizeof(array)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<array[i]<<" ";
  }
  for(int i=0;i<l;i++){
    if(largestnum<array[i]){
      largestnum=array[i];}
  }
  cout<<endl<<"Largest in an array : "<<largestnum; 
  return 0;
  }

/* Output:

Array numbers: 
113 108 1157 836 55 726 256 
Largest in an array : 1157

*/