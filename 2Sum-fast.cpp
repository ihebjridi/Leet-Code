#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
main()
{
    vector<int> nums {2, 7, 11, 15};
    int target(17);
    vector<pair<int, int>> idx;
    for (int i = 0; i < nums.size(); ++i)
    {
        idx.emplace_back(nums[i], i);
    }
    sort(idx.begin(), idx.end());

    int i = 0, j = idx.size() - 1;
    vector<int> ans;
    while (i < j)
    {
        if (idx[i].first + idx[j].first == target)
        {
            ans.push_back(idx[i].second);
            ans.push_back(idx[j].second);
            break;
        }
        else if (idx[i].first + idx[j].first < target)
        {
            ++i;
        }
        else
        {
            --j;
        }
    }
    for(int i : ans)
    {
        cout << i << endl;
    }
}