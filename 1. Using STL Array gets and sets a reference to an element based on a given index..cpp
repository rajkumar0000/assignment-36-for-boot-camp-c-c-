//        1. Using STL Array gets and sets a reference to an element based on a given index.

#include<iostream>
#include<array>
#include<iterator>
using namespace std;

int main()
{
     array <int,5>ar1={5,6,4,1,2};
     cout<<"size -> "<<ar1.size()<<endl;

     // using iterator
      array<int ,10>::iterator x;
      for(x=ar1.begin();x!=ar1.end();x++)
      {
           cout<<*x <<" ";
      }
      cout<<"\n";

      // using index or subscript operator
      for(int i=0;i<5;i++)
      {
           cout<<ar1[i]<<" ";
      }
}
