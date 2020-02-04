#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
main()
{
    string A = "acccccb";
    string B = "bccccca";
    if(A.length() != B.length()) cout << "false";
    if(A.length() < 2 || B.length() < 2) cout << false;
    else
    {
        int i;
        string C = A;

        for(i = 0; i < A.length(); i++)
        {
            if (A[i] == B[i])
            {
                A.erase(i, 1);
                B.erase(i, 1);
                i = -1;

            }
        }

        if(A.length() == 2)
            cout << (A[0] == B[1] && A[1] == B[0]) ;
        else if (A.length() == 0)
        {
            int checker = 0;

            for (int i = 0; i < C.length(); ++i)
            {
                int val = (C[i] - 'a');

                if ((checker & (1 << val)) > 0)
                    printf("%s", "true 0");

                checker |=  (1 << val);
            }

            printf("%s", "false 1");
        }

        else
        {
            printf("%s", "false 2");;
        }


    }
}