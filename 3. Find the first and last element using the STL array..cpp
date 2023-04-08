//        3. Find the first and last element using the STL array.
#include<iostream>
#include<array>
using namespace std;
int main()
{
     array <int , 5> arr1;
     for(int i=0 ; i<5 ; i++)
     {
          arr1[i]=i*100;
     }
     cout<<"front number is -> "<<arr1.front()<<endl;
     for(auto i:arr1)
          cout<<i<<" ";
     cout<<"\nlast/back number is -> " <<arr1.back()<<endl;
}
