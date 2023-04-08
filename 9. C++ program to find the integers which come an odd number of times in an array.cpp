//        9. C++ program to find the integers which come an odd number of times in an array using C++ STL.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     array <int , 9>arr1={1,1,2,2,3,3,4,4,5};

     //using hashing technic
  /*   int arr2[9]={0};
     for(int i=0 ; i<9 ;i++)
     {
          arr2[arr1[i]]++;
     }
     for(int i=0;i<9;i++)
     {
          if(arr2[i]==1)
          {
               cout<<"unique numer is -> "<<arr1[i]<<endl;
               break;
          }
     }    */
     // using zore operator in O(n) time complexty
     int result=0;
     for(int i=0;i<arr1.size();i++)
     {
          result=result^arr1[i];
     }
     cout<<result;
}
