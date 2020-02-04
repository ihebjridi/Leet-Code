#include <cstdio>

using namespace std;

const  long  long  int INF = ~ 0U >> 1 ;

int main()
{
    long long int a, b;
    scanf("%I64d%I64d", &a, &b);
    if(a == 0 && b != 0)
    {
        printf("%I64d\n", -b * b);
        while(b--) putchar('x');
        return 0;
    }
    if(b == 0 && a != 0)
    {
        printf("%I64d\n", a * a);
        while(a--) putchar('o');
        return 0;
    }
    long long int mark = -1;
    long long int mmx = -INF;
    for(long long int i = 1; i <= a; i++)
    {
        long long int part1 = (long long int)(a - i + 1) * (a - i + 1) + (i - 1);

        long long int part2 = (long long int )
                              (b / (i + 1) + 1) * (b / (i + 1) + 1) * (b % (i + 1)) +
                              (long long int)
                              (b / (i + 1)) * (b / (i + 1)) * (i + 1 - b % (i + 1));

        if(part1 - part2 > mmx)
        {
            mmx = part1 - part2;
            mark = i;
        }
    }

    printf("%I64d\n", mmx);
    for(int i = 1; i <= mark + 1; i++)
    {
        int t = b / (mark + 1);
        while(t--) putchar('x');
        if(i <= b % (mark + 1)) putchar('x');
        if(i == 1)
        {
            t = a - mark + 1;
            while(t--) putchar('o');
        }
        else if(i != mark + 1) putchar('o');
    }
    return 0;
}