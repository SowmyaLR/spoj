#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    stack<char> sym;
    char ch,c[10000];
    int i,t;
    cin>>t;
    while(t--){
    cin>>c;
    int len = strlen(c);
    //cout<<len<<endl;
    for(i=0;i<len;i++)
    {
        if(c[i]=='('||c[i] =='+'||c[i]=='-'||c[i] == '*'|| c[i]=='/'||c[i]=='^')
           {
               sym.push(c[i]);
           }
           else if(c[i]==')'&&!sym.empty())
           {
               cout<<sym.top();
               sym.pop();
               sym.pop();
           }
           else
           cout<<c[i];
    }
    if(!sym.empty())
    {
        cout<<sym.top();
        sym.pop();
    }
    cout<<endl;
   // sym.erase();
   }
    return 0;
}
