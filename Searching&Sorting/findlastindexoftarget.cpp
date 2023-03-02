#include<bits/stdc++.h>
using namespace std;

int search(vector<int>a,int target){
    int left =0,right=a.size()-1;
    while(left<right){
        int mid = (left+right+1)/2;

        if(a[mid]<=target)left=mid;
        if(a[mid]>target)right=mid-1;
    }
    if(a[right]==target){
        return right;
    }
    else{
        return left;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a;cin>>a;
    cout<<search(v,a)<<endl;
    return 0;
}