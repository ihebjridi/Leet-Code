#include<iostream>
#include<vector>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
main()
{

    vector<int> numbers {2, 3, 4, 5, 6, 7, 9};

    int target(12);
          gp_hash_table<int, int> num_ids;
    vector<int> ans;
    for(int i = 0; i < numbers.size(); i++)
    {
        num_ids.insert({numbers[i], i});
    }
    for(int i = 0; i < numbers.size(); i++)
    {
        int complement = target - numbers[i];

        auto it = num_ids.find(complement);

        if(it != num_ids.end() && it->second != i)
        {
            ans.push_back(min(i + 1,(it->second) + 1));
            ans.push_back(max(i + 1,(it->second) + 1));
            return ans;
            
        }
        

    }
        return ans;





}