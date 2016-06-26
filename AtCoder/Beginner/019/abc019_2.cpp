#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string str;

int count_same_character(int i){
	int ret=1;
	if(i == str.size()-1) return 1;
	while(str[i] == str[i+ret]){
		ret++;
	}
	return ret;
}

int main() {
	cin >> str;
	int c;
	for(int i=0;i<str.size();){
		c = count_same_character(i);
		cout << str[i] << c;
		i+=c;
	}
	cout << endl;
	return 0;
}