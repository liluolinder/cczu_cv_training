#include <bits/stdc++.h>

using namespace std;

int fbnq(int a)
{
    if( a==1 || a==2)
    {
        return 1;
    }

    return fbnq(a-1)+ fbnq(a-2);
}

int main()
{
    int n;
    int a;

    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin >>a;
        cout << fbnq(a) <<'\n';
    }

    return 0;
}
