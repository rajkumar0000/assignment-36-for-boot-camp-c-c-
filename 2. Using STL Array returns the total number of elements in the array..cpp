//        2. Using STL Array returns the total number of elements in the array.
#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{
     array <int ,5 >ar1={5,6,8,3};
     cout<<get<0>(ar1);
}
