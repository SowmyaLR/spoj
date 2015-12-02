
#include<iostream>
using namespace std;
int main()
{
    int t,a,b,ta,tb;
    cin>>t;
    while(t--)
    {
        int c=0,dif,prod;
        cin>>a>>b;
        ta = a;
        tb = b;
        int i,j,t1,t2;
        
    t1 = -a;
    t2 = -b;
    for(i= (t1+t2);i<=(ta+tb);i++)
    {
        for(j=(t1+t2);j<=(ta+tb);j++)
        {
            dif = i-j;
            dif = dif>=0?dif:(-dif);
            prod = i*j;
           // cout<<i<<j<<"dif: "<<dif<<" "<<"2prod "<<prod<<endl;
            if(dif==ta&&prod == tb)
            c++;
        }
    }
        cout<<c<<endl;
    }
}
