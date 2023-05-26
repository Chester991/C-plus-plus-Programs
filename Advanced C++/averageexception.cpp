#include <bits/stdc++.h>
using namespace std;

int average(int arr[], int n)
{
    if (n == 0)
    {
        throw string("Array size is 0. Please enter another value of n.");
    }
    int sum = accumulate(arr, arr + n, 0);
    return sum / n;
}

int main()
{
    int n1;
    do
    {
        cout << "Enter the size of the array " << endl;
        cin>>n1;
        int arr1[n1];
        cout << "Enter the elements of the array " << endl;
        for (int i = 0; i < n1; i++)
        {
            cin >> arr1[i];
        }
        try
        {
            int result = average(arr1, n1);
            cout<<result<<endl;
        }
        catch(string str){
            cout<<str<<endl;
        }

    } while (n1 == 0);
}