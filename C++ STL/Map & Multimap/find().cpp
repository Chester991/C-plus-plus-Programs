#include <bits/stdc++.h>
using namespace std;

int main()
{
   map<int, string> mp;
   mp.insert({5, "gfg"});
   mp.insert({9, "coding ninjas"});
   if (mp.find(3) == mp.end())
   {
      cout << "Not Found" << endl;
   }
   else
   {
      cout << "Found" << endl;
   }
   return 0;
   }