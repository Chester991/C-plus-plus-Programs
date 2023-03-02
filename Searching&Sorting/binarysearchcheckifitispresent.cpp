#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> arr, int target)
{
    int left = 0, right = arr.size() - 1; //-1 becz arr.size originally points to empty
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int a;cin>>a;
    cout<<binarysearch(v,a)<<endl;
    return 0;
}