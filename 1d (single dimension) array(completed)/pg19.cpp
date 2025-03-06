/* 19. C++ Program Find 2nd Smallest Number in an array. */

#include<iostream>

using namespace std;

int main(){

  int array[]={13,8,57,86,55,76,56};
  int sml1=array[0],sml2=sml1;
  cout<<"Array : "<<endl;

  int l=sizeof(array)/sizeof(int);
  for(int i=0;i<l;i++){
    cout<<array[i]<<" ";
  }
  for(int i=0;i<l;i++){
    if(sml1>array[i]){
      sml1=array[i];}
  }
  for(int i=0;i<l;i++){
    if(sml2<array[i]){
       sml2=array[i];
       break;
    }
  }
  cout<<endl<<"The Second smallest number in an array : "<<sml2; 
  return 0;
  }

/* Output :

Array : 
13 8 57 86 55 76 56 
The Second smallest number in an array : 57

*/