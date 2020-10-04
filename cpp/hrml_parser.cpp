#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Tag {
	private:
		string label;
		unordered_map<string, string> attributes;
	public:
		Tag(string, unordered_map);
		Tag parse(string);
};

				
Tag::Tag (string s, unordered_map<string, string> u): label=s, attributes=u {};

Tag Tag::parse (string s) {
	for (char i: s) {
		if (i == '<') 
			
}


int main() {
		int n, q;
		cin >> n >> q;

		string s;
		
		vector<string> v;

		while (s = cin.getline() != eof) {
				v.pushback(parse s);
		}

		return 0;
}



