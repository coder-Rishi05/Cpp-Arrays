/* 37. Write a C++ program to get the difference between the largest and smallest values in an array of integers.   */

#include<iostream>

using namespace std;

int main(){

  int arr[]={122,12,3,56,28,99,47,11};
  int maxNum=arr[0],minNum=arr[0];
  cout<<"Array : ";
  int l=sizeof(arr)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";  
  }
  for(int i=0;i<l;i++){
    if(maxNum<arr[i]){
      maxNum=arr[i];
    }
    else if(minNum>arr[i]){
      minNum=arr[i];
    }
  }
  cout<<endl<<"Difference between the largest and smallest values of array is : "<<maxNum-minNum;
  return 0;
  }

/* Output:  

Array : 122 12 3 56 28 99 47 11 
Difference between the largest and smallest values of array is : 119

 */