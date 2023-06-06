#include <bits/stdc++.h> 

// Optimal approach using Kadane's algorithm
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long maxi = arr[0];


    // 1 2 7 -4 3 2 -10 9 1
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxi = max(sum,maxi);
    
        if(sum<0)
        {
            sum=0;
        }

    }

    if(maxi<0)
        maxi = 0;

    return maxi;

    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
}
