/* 4. Program to print the duplicate elements of an array. */

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
  int ar[10],n,in=0,da[10];
  cout<<"Enter the no. of elements of array: ";
  cin>>n;
  cout<<"Enter the elements of arrays : "; 
  for(int i=0;i<n;i++){
    cin>>ar[i];
  }
  for(int i=0;i<n;i++){
    int c=0;
    for(int j=0;j<n;j++){
       if(ar[i]==ar[j]){
       c++;
       }
    }
    if(c>1){
    if(check(da,ar[i],in)){
      da[in]=ar[i];
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
  }}
  return 0;
  
  }

/* Output:

Enter the no. of elements of array: 4
Enter the elements of arrays : 1 2 3 4
No duplicate elements found 

Enter the no. of elements of array: 5 
Enter the elements of arrays : 1 2 3 4 4
Duplicate elements of  array : 
4 
 */