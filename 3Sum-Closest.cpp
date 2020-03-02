#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

main()
{

    vector<int> nums {-4,-1, 1, 2};
    int target = 1;

    sort(nums.begin(), nums.end());

    int ri, li, diff, ans;
    int min_diff = INT_MAX;
    for(int i = 0; i < nums.size() - 2; i++)
    {
        li = i + 1;
        ri = nums.size() - 1;


        while(li < ri )
        {

            int sum = nums[i] + nums[li] + nums[ri];
            int diff = abs(sum - target);
            if (diff <= min_diff)
            {
                min_diff = diff;
                ans = sum;
            }
            if(diff == 0)break;

            if(sum < target) li++ ;
            else if(sum > target) ri-- ;
        }
    }
    cout << "final : " << ans;


}