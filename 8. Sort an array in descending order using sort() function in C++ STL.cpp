//        8. Sort an array in descending order using sort() function in C++ STL
#include<bits/stdc++.h>
using namespace std;
int main()
{
     array <int , 10> arr1={5,4,3,7,2,9,1,6,8,0};
     for(auto i:arr1)
          cout<<i;
    sort(arr1.begin(),arr1.end(),greater<>());
    cout<<"\nafter sort decending order "<<endl;
     for(auto i:arr1)
          cout<<i;
}
