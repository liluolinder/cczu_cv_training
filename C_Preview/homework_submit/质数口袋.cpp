#include "bits/stdc++.h"

using namespace std;

int L;
int sum;
int localNum=2;
int maxZhiSshu;
bool isZHiShu=true;

int main()
{
    cin >> L ;
    while (sum<L)
    {   
        for (int i = 2 ; i <= (localNum/2) ; i++){
            if(localNum%i==0){
                isZHiShu=false;
                break;
            }else{
                isZHiShu=true;
            }
        }

        if(isZHiShu){
            maxZhiSshu++;
            sum+=localNum;
            
            cout << localNum << '\n';
        }
        localNum++;
    }

    cout << maxZhiSshu << '\n';

    return 0;
}