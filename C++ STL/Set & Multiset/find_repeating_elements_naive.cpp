//T.C = O(n^2) S.C = O(1)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   for (int i = 0; i < n; i++)
   {
      bool isRepeated = false;
      for (int j = i + 1; j < n; j++)
      {
         if (arr[j] == arr[i])
         {
            isRepeated = true;
            break;
         }
      }
      if (isRepeated)
      {
         cout << arr[i] << " ";
      }
   }
   cout << endl;
   return 0;
}
