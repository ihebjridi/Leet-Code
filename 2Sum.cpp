#include <vector>
#include <istream>
using namespace std;

main()
{
    vector<int> nums {2, 7, 11, 15};
    int target(17);
    int l = nums.size();
    for(int i = 0; i < l - 1; i++)
    {
        for(int j = i + 1; j < l; j++)
        {
            if(nums[i] + nums[j] == target)
            	printf("[%d,%d]",i,j);
        }
}
}