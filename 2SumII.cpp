#include<iostream>
#include<vector>

using namespace std;

main()
{

    vector<int> numbers {2,3,4,5,6,7,9};

    int target(11);
    vector<pair<int, int>> num_ids;
    vector<int> ans;
    for(int i = 0; i < numbers.size(); i++)
    {
        num_ids.push_back(make_pair(numbers[i], i));
    }
    int i = 0;
    int j = numbers.size() -1;
    while(j > i)
    {
        if(num_ids[i].first + num_ids[j].first  == target)
        {
            ans.push_back(i + 1);
            ans.push_back(j + 1);
            break;
        }
        else if (num_ids[i].first + num_ids[j].first  > target)
            j--;

        else
            i++;

    }
    


}