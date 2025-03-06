/* 26. Write a C++ program to find the index of an array element.  */

#include<iostream>

using namespace std;

int main(){

  int arr[]={21,12,43,66,98,39,72,11};
  int index;
  cout<<"Array : ";
  int l=sizeof(arr)/sizeof(int);
      for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";  
  }
        cout<<endl<<"Enter the element you want index : ";
        cin>>index;
        int i;
        for(i=0;i<l;i++){
          if(arr[i]==index){
            break;
          }
  }
          if(i==l){
            cout<<"No such element ";
          }
          else{
          cout<<"Index of the element  : "<<i<<endl;
          }
      return 0;
  
  }

  /* Output:  
  
  Array : 21 12 43 66 98 39 72 11 
  Enter the element you want index : 43
  Index of the element  : 2
  
  */
