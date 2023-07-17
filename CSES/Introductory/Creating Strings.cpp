#include <bits/stdc++.h>
using namespace std;

const int N=0;

/*

aba = 3!/2! = 3

aab
aba
baa

(1, s, a)
	(2, s, aa)
		(3, s, aab)
			return
	return

			
stringHelper (int i, string str)
{
	if (i == n){
	//base case
	myset.push(c);
	return;
	}else{
	//recursive case
	stringHelper(i+1, str + s[i]);
	}
}


*/

int n;
vector<string> myset;

void stringHelper (int i, string &s, string str)
{
	if (i == n){
	//base case
	myset.push_back(str);
	return;
	}else{
	//recursive case
	stringHelper(i+1, s, str + s[i]);
	}
}

void generateHeadsTails (int num, string str)
{
	if (num == 0){
		//base case
		cout << str << endl;
	}else{
		generateHeadsTails(num-1, str + "H");
		generateHeadsTails(num-1, str + "T");
	}
}


set<string> mystrings;
void generateAllPermutations(string str, string soFar)
{
	if (str == ""){
		//base case - when nothing left to look in string.
		mystrings.insert(soFar);
		//cout << soFar << endl;
	}else{
		for (int i=0; i<str.length(); i++){
			string rem_str = str.substr(0, i) + str.substr(i+1);
			//cout << "rem str for i : " << i << " " << rem_str << endl ;
			generateAllPermutations(rem_str, soFar + str[i]);
		}
	}
}

int main()
{
	
	//cin >> n;
	//string s = "abc";
	//stringHelper(0, s, "");
	//generateHeadsTails(3, "");
	
	string inputString;
	cin >> inputString;
	generateAllPermutations(inputString, "");
	
	cout << mystrings.size() << endl;
	for (auto x : mystrings){
		cout << x << endl;
	}
	
	return 0;
}