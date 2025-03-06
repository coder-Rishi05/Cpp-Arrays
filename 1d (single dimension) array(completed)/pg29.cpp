/* 29. Write a C++ program to find the maximum and minimum value of an array. */

#include<iostream>

using namespace std;

int main(){

        int arr[]={12,42,13,46,68,69,17,11};
        int max=arr[0],min=arr[0];
        cout<<"Array : ";
        int l=sizeof(arr)/sizeof(int);
        for(int i=0;i<l;i++){
          cout<<arr[i]<<" ";  
        }
        for(int i=0;i<l;i++){
          if(max<arr[i]){
            max=arr[i];
          }
          else if(min>arr[i]){
            min=arr[i];
          }
        }
      cout<<endl<<"Maximum value of array : "<<max<<endl;
      cout<<"Minimum value of array : "<<min;

  return 0;
  
  }

  /*Output:
    Array : 12 42 13 46 68 69 17 11 
    Maximum value of array : 69
    Minimum value of array : 11
      
  
  */
