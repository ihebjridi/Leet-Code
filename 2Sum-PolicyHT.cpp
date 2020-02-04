#include<iostream>
#include<vector>
#include <ext/pb_ds/assoc_container.hpp>
#include <typeinfo>
using namespace std;

main()
{

    vector<int> nums {3,2,4};
        
    int target(6);
    __gnu_pbds::gp_hash_table<int, int>m ;

    for(int i = 0; i < nums.size(); i++)
        m.insert({nums[i], i});

    //__gnu_pbds::gp_hash_table<int, int>::iterator it;

    for(int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        auto it = m.find(complement);
        if(it->second != i && (it != m.end()))
        {
            printf("[%d,%d]", i, m[complement]);
            break;
        }

    }

    }