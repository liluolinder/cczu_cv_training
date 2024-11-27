#include "bits/stdc++.h"

using namespace std;

int n;
int step[5001]={0,1,2};

int main()
{
    cin >> n;

    for(int i = 3 ; i <= n ; i++)
    {
        step[i]=step[i-2]+step[i-1];
    }

    cout << step[n] << '\n';

    return 0;
}