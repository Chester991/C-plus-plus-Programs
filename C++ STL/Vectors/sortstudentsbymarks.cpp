#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cout << "Enter total no. of students " << endl;
   cin >> n;
   vector<int> roll(n), marks(n);
   cout<<"Enter roll no.s of student "<<endl;
   for (int i = 0; i < n; i++)
   {
      cin >> roll[i];
   }
   cout<<"Enter marks of corresponding roll no.s"<<endl;
   for (int i = 0; i < n; i++)
   {
      cin >> marks[i];
   }
   vector<pair<int, int>> pa;
   for (int i = 0; i < n; i++)
   {
      pa.push_back({roll[i], marks[i]});
   }
   sort(pa.begin(), pa.end(), [](pair<int, int> p1, pair<int, int> p2)
        { return p1.second > p2.second; });

   for (int i = 0; i < n; i++)
   {
      cout << pa[i].first << " " << pa[i].second << endl;
   }
}