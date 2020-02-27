#include<iostream>
#include<cmath>

using namespace std;
main()
{
    int c(8);

    int s(0);
    int r = sqrt(c);
    int l(0);
    while(l < r+1)
    {
    	//cout << l << r<<endl;
        s = pow(l, 2) + pow(r, 2);
        if(s > c)
            r--;
        else if (s < c)
            l++;
        else{cout << l << r;
        	break;}
    }
    // for(int i = 0; i < root + 1; i++)
    // {
    //     for(int j = 0; j < i + 1; j++)
    //     {
    //         if (pow(i, 2) + pow(j, 2) == c)
    //             cout << "\ni : " << i << "\nj : " << j;
    //     }
    // }
}