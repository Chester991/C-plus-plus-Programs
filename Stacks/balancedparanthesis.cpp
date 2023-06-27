#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

bool match(char a, char b)
{
   if (a == '[' && b == ']')
   {
      return true;
   }
   else if (a == '(' && b == ')')
   {
      return true;
   }
   else if (a == '{' && b == '}')
   {
      return true;
   }
   else{
      return false;
   }
}

int main()
{
   string str;
   cin >> str;
   stack<char> s;
   for (int i = 0; i < str.length(); i++)
   {
      if (str[i] == '(' || str[i] == '[' || str[i] == '{')
      {
         s.push(str[i]);
      }
      else
      {
         if (s.empty() == true)
         {
            cout << "Invalid brackets" << endl;
            return 0;
         }
         else if (match(s.top(),str[i])==false){
            cout << "Invalid brackets" << endl;
            return 0;
         }
         else{
            s.pop();
         }
      }
   }
   if(s.empty()==true){
      cout << "Valid brackets" << endl;
      return 1;
   }
   else{
      cout << "Invalid brackets" << endl;
      return 0;
   }
}
