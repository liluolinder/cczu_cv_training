/*
    不会，以后再补充
*/


// #include "bits/stdc++.h"

// using namespace std;

// int foundWay(int x,int N,int road[][])
// {
//     if(x==1) return 1;
//     for(int i = 1 ; i<=N ;i++){
//         if (road[x][1]!=0)
//         {
//             return road[x][i];
//         }else{
//             if(foundWay(x,N,road[][]))
//         }
//     }

// }

// int main()
// {
//     int N,M;
//     int a,b;
//     cin >>N>>M;
//     int road[N][N]={0};    
//     int way[N]={1};

//     for(int i = 0 ; i < M ; i++)
//     {
//         cin >>a>>b;
//         road[a][b]++;
//     }

//     for(int x = 1 ; x <= N ; x++)
//     {
//         way[x]=foundWay(x,N,road);
//         cout <<way[x]<<'\n';
//     }



//     return 0;
// }