/* 33. Write a C++ program to find the duplicate values of an array of integer values. */

#include<iostream>


using namespace std;

    int check(int a[],int num,int s){
      for(int i=0;i<s;i++){
      if (a[i]==num){
        return 0;
      }
  }
  return 1;
}
    int main(){
      int arr[10],n,in=0,da[10];
      cout<<"Enter the no. of elements of array: ";
      cin>>n;
      cout<<"Enter the elements of arrays : "; 
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
          if(arr[i]==arr[j]){
          c++;
          }
        }
        if(c>1){
        if(check(da,arr[i],in)){
          da[in]=arr[i];
          in++;
        }
        }
      }
      if(in==0){
        cout<<"No duplicate elements found ";
      }
      else{
      cout<<"Duplicate elements of  array : "<<endl;
      for(int i=0;i<in;i++){
        cout<<da[i]<<" ";
          }
      }
      return 0;
      }

      /*Output: 

      Enter the no. of elements of array: 5
      Enter the elements of arrays : 1 2 3 4 5 
      No duplicate elements found 
      
      Enter the no. of elements of array: 5
      Enter the elements of arrays : 1 2 1 2 2
      Duplicate elements of  array :  1 2 
      */
