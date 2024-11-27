#include "bits/stdc++.h"

using namespace std;

void sort_choose(int *nums,int n)
{
    int temp;
    for(int i = 0 ; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(nums[i]<nums[j])
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
}

void sort_bubble(int *nums,int n)
{
    int temp=0;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if(nums[i]>nums[j])
            {
                temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
}

int main()
{
    int n;
    int *nums;

    cin >> n;
    nums=(int *) malloc(n*sizeof(int));

    for(int i = 0 ; i < n ; i++)
    {
        cin >> nums[i];
    }

    /*
        直接调用CPP自带的函数（艹）
    */
    //sort(nums,nums+n);

    //冒泡排序
    sort_bubble(nums,n);

    /*
        选择排序
    */
    // sort_choose(nums,n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << nums[i]<<' ';
    }
    cout <<'\n';
    
    free(nums);

    return 0;
}