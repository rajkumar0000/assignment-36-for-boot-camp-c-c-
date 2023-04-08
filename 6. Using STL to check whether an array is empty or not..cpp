//        6. Using STL to check whether an array is empty or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     array <int,10>arr1={1,2,3,4};
     array <int,0>arr2;

     if(arr1.empty())
          cout<<"array 1 is empty "<<endl;
     else
          cout<<"array 1 not empty "<<endl;
     if(arr2.empty())
          cout<<"array 2 is empty "<<endl;
      else
          cout<<"array 2 not empty "<<endl;
}
