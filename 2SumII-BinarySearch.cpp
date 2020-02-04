#include<iostream>
#include<vector>

using namespace std;

main()
{

    vector<int> numbers {2, 3, 4, 5, 6, 7, 9};

    int target(16);
    for(int i = 0; i < numbers.size(); i++)
    {
        int l = i + 1;

        int r = numbers.size() - 1;

        int complement = target - numbers[i];
        while(l <= r)
        {
            int mid = l + (r - l) / 2;

            if (numbers[mid] == complement)
            {
                cout << i + 1 << "solution" << mid + 1 << endl;
                break;
            }

            else if  (numbers[mid] < complement)
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
}