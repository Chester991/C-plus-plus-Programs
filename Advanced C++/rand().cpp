#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   srand(time(NULL));
   int low = 10, high = 100;
   int range = high - low + 1;
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cout << (rand() % range) + low << " ";
   }
}
