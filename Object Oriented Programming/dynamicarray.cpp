#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }

    int max = 1;
    for(int i=0;i<n;i++){
        if(p[i] > max){
            max = p[i];
        }
    }
    
    cout<<max<<endl;
    return 0;
}