#include <iostream>
#include <cstring>

using namespace std;

string cat(string, string);

int main(){
	string s1;
	string s2;

	cin >> s1;
	cin >> s2;
	
	cout<<cat(s1, s2);
	
	return 0;
}

string cat(string s1 , string s2)
{
	s1=s1+s2;
	
	return s1;
}
