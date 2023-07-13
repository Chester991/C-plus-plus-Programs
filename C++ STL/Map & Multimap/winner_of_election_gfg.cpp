//T.C = O(n) S.C = O(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<string> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   unordered_map<string, int> mp;
   for (int i = 0; i < n; i++)
   {
      mp[arr[i]]++;
   }
   int max_freq = 0;
   string winner;
   string str;
   for (auto i : mp)
   {
      if (i.second > max_freq)
      {
         max_freq = i.second;
         winner = i.first;
      }
      else if (i.second == max_freq && i.first < winner)
      {
         winner = i.first;
      }
      str = winner;
   }
   cout << "Winner of election is : "<< str << endl;
}