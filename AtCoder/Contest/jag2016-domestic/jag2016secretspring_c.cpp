#include <bits/stdc++.h>

using namespace std;

string a,b;
vector<int> ar;
vector<int> br;

vector<int> parse(string s){
	vector<int> ret;
	int nest=0;
	for(int unsigned i = 0;i<s.size();i++){
		if(s[i] == '('){
			ret.emplace_back(nest);
			nest++;
		}else if(s[i] == ')'){
			nest--;
			ret.emplace_back(nest);
		}else{
			ret.emplace_back(nest);
		} 
	}
	return ret;
}

int main(){
	cin >> a;
	cin >> b;
	ar = parse(a);
	br = parse(b);
	unsigned idxa = 0,idxb = 0;
	while(idxa < ar.size() && idxb < br.size()){
		if(!isdigit(a[idxa]) && a[idxa] == b[idxb]){
			cout << a[idxa];
			idxa++;
			idxb++;
		} else if(a[idxa] == ')'){
			while(b[idxb] != ')' || br[idxb] != ar[idxa]) idxb++; 
		} else if(b[idxb] == ')'){
			while(a[idxa] != ')' || ar[idxa] != br[idxb]) idxa++; 
		} else {
			string a_num;
			while(isdigit(a[idxa])){
				a_num += a[idxa];
				idxa++;
			}
			string b_num;
			while(isdigit(b[idxb])){
				b_num += b[idxb];
				idxb++;
			}
			cout << stoi(a_num) + stoi(b_num);
		}
	}
	cout << endl;
	
	return 0;
}