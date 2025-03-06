/* 39. Write a C++ program to cyclically rotate a given array clockwise by one. */

#include<iostream>

using namespace std;

int main(){

  int arr[10],num;
  cout<<"Enter the no. of elements of array: ";
  cin>>num;
  cout<<"Enter the elements of arrays : "; 
  for(int i=0;i<num;i++){
    cin>>arr[i];
  }
  int temp=arr[num-1];
  for(int i=num-1;i>0;i--){
    arr[i]=arr[i-1];
  }
  arr[0]=temp;
  cout<<"Elements of array after  rotating ones clockwise : "<<endl;
  for(int i=0;i<num;i++){
    cout<<arr[i]<<"  ";
  }
  return 0;
  
  }

/* Output:   
      Enter the no. of elements of array: 3
      Enter the elements of arrays : 1 2 3
      Elements of array after  rotating ones clockwise : 3  1  2

*/