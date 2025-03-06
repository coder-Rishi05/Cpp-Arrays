/* 34. Write a C++ program to find second largest number from the array. */

#include<iostream>

using namespace std;

int main(){
        int arr[]={113,38,57,56,95,6,36};
        int lrt=arr[0],lrt2=lrt;
        cout<<"Array : ";
        int l=sizeof(arr)/sizeof(int);
        for(int i=0;i<l;i++){
          cout<<arr[i]<<" ";
        }
  for(int i=0;i<l;i++){

        if(lrt<arr[i]){
          lrt2=lrt;
          lrt=arr[i];}
        if(lrt2<arr[i] && arr[i]<lrt){
          lrt2=arr[i];
          }
  }
  cout<<endl<<"Second largest in an array : "<<lrt2; 
  return 0;
  
  }

  /* Output: 
  Array : 
          113 38 57 56 95 6 36 
          Second largest in an array : 113
  
  */
