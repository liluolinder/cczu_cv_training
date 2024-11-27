#include <bits/stdc++.h>

using namespace std;

int fbnq[31]={0,1,1};

int n ;

int a;

int main()
{
    for(int i = 3 ; i < 31 ; i++)
    {
        fbnq[i] = fbnq[i-2] + fbnq[i-1];
    }


    cin >>n;

    for(int i = 0 ; i < n ;i++)
    {
        cin >> a;
        cout << fbnq[a] <<'\n';
    }

    return 0;
}
