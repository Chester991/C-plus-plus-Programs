#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> arr1(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr1[i];
   }
   int k;
   cin >> k;
   vector<int> arr2(n);
   for (int i = 0; i < k; i++)
   {
      cin >> arr2[i];
   }
   for (int i = 0; i < n; i++)
   {
      bool flag = false;
      for (int j = 0; j < k; j++)
      {
         if (arr1[i] == arr2[i])
         {
            flag = true;
            break;
         }
      }
      if(flag == true){
         cout<<arr1[i]<<" ";
      }
   }
   return 0;
}