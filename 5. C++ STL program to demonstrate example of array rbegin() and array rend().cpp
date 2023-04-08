//        5. C++ STL program to demonstrate example of array::rbegin() and array::rend() functions
#include<bits/stdc++.h>
using namespace std;
int main()
{
     array <int , 5> arr1={6,7,8,9,2};
     cout<<"printing forwerd "<<endl;
     for(auto x:arr1)
          cout<<x<<" ";
     cout<<endl;

     auto i=arr1.rbegin();//last index iterator OR reverse of begain()
          cout<<"rbegain() -> "<<*i<<endl;
     auto j=arr1.rend();//frist index iterator OR reverse of end()
          cout<<"rend() -> "<<*j<<endl;

     cout<<"printing reverse order using rbegain() & rend() "<<endl;
     for(auto i = arr1.rbegin() ; i!=arr1.rend(); i++)
          cout<<*i<<" ";
}
