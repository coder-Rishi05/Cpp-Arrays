/* 2. Program to find the frequency of each element in the array. */

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
  int ar[10],rn[10],n,c=0,in=0;
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
    if(check(rn,ar[i],in)){
    rn[in]=ar[i];
    in++;
    cout<<"Frequency of "<<ar[i]<<" : "<<c<<endl;
  }}
  return 0;}

/* Output:

Enter the no. of elements of array: 3
Enter the elements of arrays : 1 2 2
Frequency of 1 : 1
Frequency of 2 : 2

*/