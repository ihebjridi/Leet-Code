#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

main()
{
    vector<int> nums {-1, 0, 1, 2, -1, -4};

    vector <vector<int>> ans;
    if (nums.empty() || nums.size() < 3 ) cout<<"[]";

    bool zeros = all_of(nums.begin(), nums.end(), [](int i)
    {
        return i == 0;
    });
    if (zeros)
    {
        ans.push_back(vector<int> {0, 0, 0});
        cout << "[0,0,0]";
    }


    int ri, li;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 2; i++)
    {
        li = i + 1;
        ri = nums.size() - 1;

        while(li < ri)
        {
            int sum = nums[i] + nums[li] + nums[ri];
            if (sum == 0)
            {

                ans.push_back(vector <int> {nums[i], nums[li], nums[ri]});
                li++;
                ri--;
            }
            else if(sum < 0) li++ ;
            else ri-- ;
        }
    }

    set<vector<int>> s(ans.begin(), ans.end());
    ans.assign(s.begin(), s.end());

    for(int i = 0; i < ans.size(); i++)
    {

        for(int j = 0; j < ans[i].size(); j++)

            cout << ans[i][j];

        cout << endl;

    }


}