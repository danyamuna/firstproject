#include <iostream>
#include <bits/stdc++.h>
using namespace std;
  tuple <int,int,char> t1(int n,int n1)
    {
        return make_tuple(n,n1,'d');
    }
   std::pair<int,int> p (int v,int x){
   return std::make_pair(v,x);
   }
int main()
{

    int a,b;
    int new_var;
    int x;
    ınt y;
         char c;
         int z;
    tie(a,b,c)= t1(2,3);
    cout << "Values returned by tuple: ";
    cout << a << " " << b << " " << c << endl;
    pair<int, int> p1 = p(5,2);
    cout << "Values returned by Pair: ";
    cout << p1.first << " " << p1.second;

    return 0;
}
