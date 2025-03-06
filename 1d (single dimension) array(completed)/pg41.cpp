/* 41. Write a C++ Program to Sort the Array in an Ascending Order. */

#include<iostream>

using namespace std;

      int main(){
        int arr[10],num,l=0;
        cout<<"Enter the no. of elements of array: ";
        cin>>num;
        cout<<"Enter the elements of arrays : "; 
        for(int i=0;i<num;i++){
          cin>>arr[i];
        }
      int temp;
      for(int i=0;i<num-1;i++){
        for(int j=0;j<num-i-1;j++){
          if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
        }
     }
  cout<<"Array after sorting in ascending order : "<<endl;
  for(int i=0;i<num;i++){
    cout<<arr[i]<<"  ";
  }
  return 0;
  
  }

/* Output: 

Enter the no. of elements of array: 5
Enter the elements of arrays : 76 678 4 23 1
Array after sorting in ascending order : 
1  4  23  76  678  

*/