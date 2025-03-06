/* 38. Write a C++ program to segregate all 0s on left side and all 1s on right side of a given array of 0s and 1s.   */

#include<iostream>

using namespace std;

int main(){
  int arr[10],elements;
  cout<<"Enter the no. of elements : ";
  cin>>elements;
  cout<<" Enter Array elements (0 and 1 only) : "<<endl;
  for(int i=0;i<elements;i++){
    cin>>arr[i];  
  }
  int tem;
  for(int i=0;i<elements-1;i++){
    for(int j=0;j<elements-i-1;j++){
      if(arr[j]>arr[j+1]){
         tem=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=tem;
      }
    }
  }
  cout<<"Array after segregation of all '0' and '1' : ";
  for(int i=0;i<elements;i++){
    cout<<arr[i]<<" "; 
  }
  return 0;
  
  }

/* Output:   

Enter the no. of elements : 4
Enter Array elements (0 and 1 only) : 
0 1 1 0
Array after segregation of all '0' and '1' : 0 0 1 1 

*/