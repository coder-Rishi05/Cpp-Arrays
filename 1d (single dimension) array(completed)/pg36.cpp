/* 36. Write a C++ program to find the number of even and odd integers in a given array of integers  */

#include<iostream>

using namespace std;


int main(){
  int arr[]={11,12,33,76,81,97,78,100};
  int even=0,odd=0;
  cout<<"Array : ";
  int l=sizeof(arr)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";  
  }
  for(int i=0;i<l;i++){
    if(arr[i]%2==0){
    even++;}
    else{
      odd++;
    }
  } 
  cout<<endl<<"No. of even elements in array : "<<even<<endl;
  cout<<"No. of odd elements in array : "<<odd<<endl;
  return 0;

  }

/* Output:  

    Array : 11 12 33 76 81 97 78 100 
    No. of even elements in array : 4
    No. of odd elements in array : 4

 */