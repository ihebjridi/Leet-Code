#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<chrono>
#include<time.h>
using namespace std;

main()
{

    vector<int> nums {3,2,4};
        
    int target(6);
    auto t1 = std::chrono::high_resolution_clock::now();
    map<int, int>m ;

    for(int i = 0; i < nums.size(); i++)
        m.insert({nums[i], i});

    map<int, int>::iterator it;

    for(int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        it = m.find(complement);
        if(it->second != i && (it != m.end()))
        {
            printf("[%d,%d]", i, m[complement]);
            break;
        }

    }
    auto t2 = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    cout << "duration : " << duration;

    }