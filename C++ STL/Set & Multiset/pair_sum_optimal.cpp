#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int sum;
   pair<int,int>p;
   cin >> sum;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   unordered_set<int> s;
   bool found = false;
   for (int i = 0; i < n; i++)
   {
      if(s.find(sum - arr[i]) != s.end())
      {
         found = true;
         break;
      }
      else{
         s.insert(arr[i]);
      }
   }
   if(found = true){
      cout<<"Pair Exists"<<endl;
   }
   else{
      cout<<"Pair does not exist"<<endl;
   }
   return 0;
}