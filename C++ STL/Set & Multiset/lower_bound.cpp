#include<bits/stdc++.h>
using namespace std;

int main(){
   set<int>s;
   s.insert(10);
   s.insert(15);
   s.insert(20);
   for(auto it = s.begin();it != s.end();it++){
      cout<<(*it)<<" ";
   }
   cout<<endl;
   int n;cin>>n;
   auto it = s.lower_bound(n);
   if(it != s.end()){
      cout<<*it<<" ";
   }
   else{
      cout<<"Given element is greater than the largest "<<endl;
   }
   return 0;
}