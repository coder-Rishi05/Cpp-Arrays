/* 3. Program to left rotate the elements of an array*/

#include<iostream>
using namespace std;
int main(){
  int ar[10],n;
  cout<<"Enter the no. of elements of array: ";
  cin>>n;
  cout<<"Enter the elements of arrays : "; 
  for(int i=0;i<n;i++){
    cin>>ar[i];
  }
  int temp=ar[0];
  for(int i=0;i<n-1;i++){
    ar[i]=ar[i+1];
  }
  ar[n-1]=temp;
  cout<<"Elements of array after left rotate : "<<endl;
  for(int i=0;i<n;i++){
    cout<<ar[i]<<"  ";
  }
  return 0;
  
  }

  /*  Output :
  Enter the no. of elements of array: 5
  Enter the elements of arrays : 1 2 3 4 5 
  Elements of array after left rotate : 
  2  3  4  5  1  
    
  */
