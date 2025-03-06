/* 28. Write a C++ program to test if an array contains a specific value. */

#include<iostream>

using namespace std;

int main(){

      int arr[]={13,12,23,46,58,29,17,11};
      int spnum;
      cout<<"Array : ";
      int l=sizeof(arr)/sizeof(int);
      for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";  
      }
          cout<<endl<<"Enter the element you want to check in array : ";
          cin>>spnum;
          int i;
          for(i=0;i<l;i++){
        if(arr[i]==spnum){
          cout<<"Element found in array ";
          break;
     }
        }
        if(i==l){
      cout<<"Element not found in array ";
  }  
  return 0;
  }
/* Output:

Array : 13 12 23 46 58 29 17 11 
Enter the element you want to check in array : 58
Element found in array 

Array : 13 12 23 46 58 29 17 11 
Enter the element you want to check in array : 1
Element not found in array 

*/