/* 35. Write a C++ program to find second lowest number from the array. */

#include<iostream>


using namespace std;


int main(){
      int arr[]={31,82,7,6,55,67,5};
      int small1=arr[0],small2=small1;
      cout<<"Array : ";
      int l=sizeof(arr)/sizeof(int);
      for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
      }
        for(int i=0;i<l;i++){
          if(small1>arr[i]){
            small1=arr[i];}
  }
      for(int i=0;i<l;i++){
        if(small2<arr[i]){
          small2=arr[i];
          break;
  }
  };
  cout<<endl<<"Second smallest in an array : "<<small2; 
  return 0;
  
  }

/* Output: 

Array : 31 82 7 6 55 67 5 
Second smallest in an array : 82

*/