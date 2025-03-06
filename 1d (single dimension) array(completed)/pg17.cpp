/*17. Program to Find 2nd Largest Number in an array.*/

#include<iostream>

using namespace std;

int main(){
  int array[]={3,8,57,86,55,76,56};
  int num=array[0],num2=num;
  cout<<"Array : "<<endl;
  int l=sizeof(array)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<array[i]<<" ";
  }
  for(int i=0;i<l;i++){
    if(num<array[i]){
      num2=num;
      num=array[i];}
    if(num2<array[i] && array[i]<num){
      num2=array[i];
      }
  }
  cout<<endl<<"Second largest in an array : "<<num2; 
  return 0;
  
  }
/* Output: 
Array : 
3 8 57 86 55 76 56 
Second largest in an array : 76

*/