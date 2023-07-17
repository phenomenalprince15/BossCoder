#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	char *ch = "Hello World";
	char s[50] = "Hi Prince";
	string str = "Hello Prince";
	
	cout << ch << strlen(ch) << endl; // "Hello\0World" --> Hello -->5
	cout << s << strlen(s) << endl;
	cout << str << str.size() << endl;
	
	//str.front('!');
	//str.back('!');
	cout << str << str.size() << endl;
	
	//Concatenate two strings
	string a = "Hello";
	string b = " Prince";
	
	cout << a + b << endl;
	
	//input should be char Array
	char c[50] = "Hello";
	char d[50] = " World";
	strcat(c, d);
	
	cout << c << endl;
	
	a.append(b);
	cout << a << endl;
	
	//comparision, strcmp works on char Arrays
	cout << strcmp (c, d) << endl;
	
	cout << a.compare(b) << endl;
	
	cout << a.size() << endl;
	
	reverse(a.begin(), a.end());
	cout << a << endl;
	
	sort(a.begin(),a.end());
	cout << a << endl;
	
	string e(6, 'a');
	cout << e << endl;
	
	
	return 0;
}