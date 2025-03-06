/* 14. Program to sort the elements of an array in ascending order. */

#include<iostream>
using namespace std;
int main(){
  int array[10],n,l=0;
  cout<<"Enter the no. of elements of array: ";
  cin>>n;
  cout<<"Enter the elements of arrays : "; 
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  int temp;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(array[j]>array[j+1]){
         temp=array[j];
         array[j]=array[j+1];
         array[j+1]=temp;
      }
    }
  }
  cout<<"Array after sorting in ascending order : "<<endl;
  for(int i=0;i<n;i++){
    cout<<array[i]<<"  ";
  }
  return 0;
  
  }
/* Output:

Enter the no. of elements of array: 5
Enter the elements of arrays : 
100
9
3
567
32
Array after sorting in ascending order :
3  9  32  100  567

*/