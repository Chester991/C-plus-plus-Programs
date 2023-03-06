#include<bits/stdc++.h>
using namespace std;

void names(int n, string name){
    if(n>0){
        cout<<name<<endl;
        n--;
        names(n, name);  // Recursive call with updated n value
    }
}

int main(){
    int a;string str;
    cin>>a>>str;
    cout<<endl;
    names(a,str); // Function call without cout
    return 0;
}
