/* 40. Write a C++ program to print all unique element in an array.  */

#include<iostream>

using namespace std;


int main(){

  int arr[10],l;

  cout<<"Enter the no. of elements : ";
  cin>>l;
  cout<<" Enter Array elements : "<<endl;
  for(int i=0;i<l;i++){
    cin>>arr[i];  
  }
  int c=0,con=0;
  cout<<"Unique elemenst of given array : ";
  for(int i=0;i<l;i++){
    c=0;
    for(int j=0;j<l;j++){
      if(arr[i]==arr[j]){
         c++;
      }
    }
    if(c==1){
      cout<<arr[i]<<" ";
      con=1;
    }
  }
  if(con==0){
    cout<<"No element found ";
  }
  return 0;
  
  }

  /*  Output: 
  
  Enter the no. of elements : 4
  Enter Array elements : 
    1
    2
    4
    4
  Unique elemenst of given array : 1 2 
  
    */
