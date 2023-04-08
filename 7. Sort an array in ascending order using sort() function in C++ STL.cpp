//        7. Sort an array in ascending order using sort() function in C++ STL
#include<bits/stdc++.h>
using namespace std;
int main()
{
     array <int , 10> arr1={5,4,3,7,2,9,1,6,8,0};
     for(auto i:arr1)
          cout<<i;
     cout<<"\nafter shorting "<<endl;
     //auto i=arr1.begin();
     //auto j=arr1.end();
     sort(arr1.begin(),arr1.end());
     for(auto i:arr1)
          cout<<i;
}
