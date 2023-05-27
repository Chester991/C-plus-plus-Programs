#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12, 14, 2, 6, 8};
    int n = 5;
    // instead of making a seperate comparator function. I could use a lambda expression.
    sort(arr, arr + n, [](int a, int b) {return abs(a) > abs(b);});
    for (auto i : arr){
        cout<<i<<" ";  
    }
    // output = 14 12 8 6 2
}