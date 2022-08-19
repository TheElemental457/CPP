#include <iostream>
using namespace std;
/*
Logic if x%2==1 and x>y:
Every collum number squared is the first number.
So I squared the collum number and subtract y.
I then noticed that it was one greater, so the formula would turn out to be x*x-y+1.
For x%2==0 and x>y:
I wanted to get back to the odd collums, so I subtracted 1 from x.
Then I did x*x and added y because the pattern loops around and takes y steps to land at the answer.
This logic applies to when y>x too, but reversed with evens and odds.
*/
// https://cses.fi/problemset/task/1071

int main()
{
    long long t, z;
    cin>>t;
    for(long long i=1; i<=t; i++)
    {
        long long x, y;
        cin>>y>>x;
        if(x>y)
        {
            if(x%2==0)
            {
                z=((x-1)*(x-1))+y;
                cout<<z<<endl;
            }
            else if(x%2==1)
            {   
                z=((x*x)-y)+1;
                cout<<z<<endl;
            }
        }
        else if(y>=x)
        {
            if(y%2==0)
            {
                z=((y*y)-x)+1;
                cout<<z<<endl;
            }
            else if(y%2==1)
            {  
                z=((y-1)*(y-1))+x;
                cout<<z<<endl;
            }
        }
    }
    return 0;
}
