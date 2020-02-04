#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>

using namespace std;
main() 
{
    	int x(-500);
        if(x >= INT_MAX || x <= INT_MIN) cout << 0;
        int res;
        bool neg=false;
        if(x<0) {neg=true; x = unsigned(x);}
        string str = to_string(x);
        
        reverse(str.begin(),str.end());
        if(neg) 
        {stringstream ss('-'+str);
        ss >> res;
        if(res >= INT_MAX || res <= INT_MIN) res= 0;
        cout << res;}
        else
        {stringstream ss(str);
        ss >> res;
         if(res >= INT_MAX || res <= INT_MIN) res= 0;
        cout << res;}
         
        
        
 }
