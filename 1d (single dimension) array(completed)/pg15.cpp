/* 15. Program to sort the elements of an array in descending order. */

#include<iostream>
using namespace std;
int main(){
  int array[10],num;
  cout<<"Enter the no. of elements of array: ";
  cin>>num;
  cout<<"Enter the elements of arrays : "; 
  for(int i=0;i<num;i++){
    cin>>array[i];
  }
  int temp;
  for(int i=0;i<num-1;i++){
    for(int j=0;j<num-i-1;j++){
      if(array[j]<array[j+1]){
         temp=array[j];
         array[j]=array[j+1];
         array[j+1]=temp;
      }
    }
  }
  cout<<"Array after sorting in descending order : "<<endl;
  for(int i=0;i<num;i++){
    cout<<array[i]<<"  ";
  }
  return 0;
  }

/* Output:

Enter the no. of elements of array: 6 
Enter the elements of arrays : 12 31 45 2 1 5
Array after sorting in descending order : 
45  31  12  5  2  1 

*/