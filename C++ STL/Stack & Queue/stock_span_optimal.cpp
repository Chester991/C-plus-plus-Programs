#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> stocks(n);
   for (int i = 0; i < n; i++)
   {
      cin >> stocks[i];
   }
   vector<int> span(n); // an array to store span of the each stock
   stack<int> s;
   s.push(0);
   span[0] = 1; // span of the first element will be always zero
   for (int i = 1; i < n; i++)
   {
      while (!s.empty() && stocks[s.top()] <= stocks[i])
      {
         s.pop();
      }
      if (s.empty())
      {
         span[i] = i + 1; // when the stack is empty its pan will be i + 1
      }
      else
      {
         span[i] = i - s.top();
      }
      s.push(i);
   }
   for (int i : span)
   {
      cout << i << " ";
   }
}