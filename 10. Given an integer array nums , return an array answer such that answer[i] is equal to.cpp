//   10. Given an integer array nums , return an array answer such that answer[i] is equal to
//       the product of all the elements of nums except nums[i] .
#include<iostream>
#include<array>
using namespace std;
int product_equal(array<int,5>arr)
{
     int sum=0;
     for(int i=0;i<5;i++)
     {
          sum=sum+arr[i];
     }
     return sum;
}
int main()
{
     array <int ,5>nums={1,2,3,4,5};
     cout<<"sum product of array -> "<<product_equal(nums);
}
