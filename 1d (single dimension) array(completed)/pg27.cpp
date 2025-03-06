/* 27. Write a C++ program to calculate the average value of array elements */

#include<iostream>

using namespace std;


int main(){

  int arr[]={12,23,332,62,81,69,27,11};
  int avg=0;
      cout<<"Array : ";
      int a=sizeof(arr)/sizeof(int);
      for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";  
      }
      for(int i=0;i<a;i++){
        avg=avg+arr[i];
      }
        cout<<endl<<"Average of all values of array  : "<<(float)avg/a<<endl;

  return 0;
  
  }

  /* Output:

  Array : 12 23 332 62 81 69 27 11 
  Average of all values of array  : 77.125
  
  */
