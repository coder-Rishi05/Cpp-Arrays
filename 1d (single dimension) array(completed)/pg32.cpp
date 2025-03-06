/*32. Write a C++ program to find the common elements between two arrays. */

#include<iostream>

using namespace std;

 int check(int ar[],int n,int s){
            for(int i=0;i<s;i++){
              if(ar[i]==n){
                return 0;
          }
        }
        return 1;
}
      int main(){
        int ar1[]={12,21,33,65,8,9,7,11};
        int ar2[]={44,55,33,21,19,10,3,65,14};
        int l1=sizeof(ar1)/sizeof(int);
        int l2=sizeof(ar2)/sizeof(int);
        cout<<"Array 1 : "<<endl;
        for(int i=0;i<l1;i++){
          cout<<ar1[i]<<" ";  
        }
            cout<<endl<<"Array 2 : "<<endl;
            for(int i=0;i<l2;i++){
              cout<<ar2[i]<<" ";  
            }
                  int ca[10],cai=0;
                  for(int i=0;i<l1;i++){
                    for(int j=0;j<l2;j++){
                    if(ar1[i]==ar2[j]){
                        if(check(ca,ar1[i],cai)){
                            ca[cai]=ar1[i];
                            cai++;  
                        }
                      }
                }
           }

          cout<<endl<<"Common elements between arrays : "<<endl;
          for(int i=0;i<cai;i++){
            cout<<ca[i]<<" ";  
          }
  return 0;

  }

  /*Output: 
  
        Array 1 : 
        12 21 33 65 8 9 7 11 
        Array 2 : 
        44 55 33 21 19 10 3 65 14 
        Common elements between arrays : 
        21 33 65 
          
  */
