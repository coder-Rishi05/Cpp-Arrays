/* 21. Program to Remove Duplicate Element in an array. */

#include<iostream>

using namespace std;

int main(){
    int array[]={38,13,38,15,55,15,55,66,18};
    int c=0;
    cout<<"Array : "<<endl;
    int l=sizeof(array)/sizeof(int);
    for(int i=0;i<l;i++){
      cout<<array[i]<<" ";
    }
    for(int i=0;i<l;i++){
    c=0;
    for(int j=0;j<l;j++){
      if(array[i]==array[j]){
          c++;
          if(c>=2){
            for(int k=j;k<l-1;k++){
                array[k]=array[k+1];
            }
              l=l-1;  
          }
      }
    }
    }
      cout<<endl<<"Array after removal of duplicate elements : "<<endl;
      for(int i=0;i<l;i++){
      cout<<array[i]<<" ";
    }
    return 0;
  }

  /* OUtput: 
  
  Array : 
  38 13 38 15 55 15 55 66 18 
  Array after removal of duplicate elements : 
  38 13 15 55 66 18 
  
  */
