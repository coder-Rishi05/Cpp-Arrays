/* 42. Write a C++ Program to Sort the Array in an Descending Order. */

#include<iostream>

using namespace std;

int main(){

        int arr[10],n,l=0;
        cout<<"Enter the no. of elements of array: ";
        cin>>n;
        cout<<"Enter the elements of arrays : "; 
        for(int i=0;i<n;i++){
          cin>>arr[i];
        }

        int temp;
        for(int i=0;i<n-1;i++){
          for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
      }
  cout<<"Array after sorting in descending order : "<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
  }
  return 0;
  
  }

/* Output : 

Enter the no. of elements of array: 6
Enter the elements of arrays : 12 24 53 76 8 9
Array after sorting in descending order : 
76  53  24  12  9  8  

*/