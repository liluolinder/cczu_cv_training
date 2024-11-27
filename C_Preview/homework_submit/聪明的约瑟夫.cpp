#include "bits/stdc++.h"

using namespace std;

int main()
{
    int k,m,killMan=0;
    bool isFind=true;
    cin >> k;
    m=k;
    
    while(isFind)
    {   
        m++;
        killMan=0;
        for(int i = 0 ; i < k ;i++)
        {
            killMan=(killMan+m-1)%(2*k-i);
            if(killMan<k)
            {
                break;
            }
            if(i==k-1)
            {
                isFind=false;
            }
        }
        
    }

    cout << m << '\n';
    return 0 ;
}