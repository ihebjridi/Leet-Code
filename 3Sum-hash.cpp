#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<unordered_set>

using namespace std;

main()
{
    vector<int> nums {-1, 0, 1, 2, -1, -4};
    set <vector<int>> ans;
    if (nums.empty() || nums.size() < 3 ) cout << "[]";

    bool zeros = all_of(nums.begin(), nums.end(), [](int i)
    {
        return i == 0;
    });
    if (zeros)
    {
        ans.insert(vector<int> {0, 0, 0});
        cout << "[0,0,0]";
    }

    for(int i = 0; i < nums.size()-1; i++)
    {
        unordered_set<int> s;
        for(int j = i + 1; j < nums.size(); j++)
        {
            int sum = -(nums[i] + nums[j]);
            if (s.find(sum) != s.end())
                ans.insert(vector<int> {nums[i], nums[j], sum});
            else
                s.insert(nums[j]);

        }


    }


    for (auto it = ans.begin(); it != ans.end(); ++it)
    {
    	const vector<int>& i = (*it);

        for(int j = 0; j < i.size(); j++)

            cout << i[j];

        cout << endl;
    }
}

