#include <string>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main(){
	char vowels[6] {'a','o','y','e','u','i'};
	string c;
	cin >> c;
	for(int i=0;i<c.length();i++){

		char ch = tolower(c[i]);
		if (find(begin(vowels),end(vowels), ch) != end(vowels))
			continue;
		else
			cout <<"." <<ch;
			}
	return 0;

}