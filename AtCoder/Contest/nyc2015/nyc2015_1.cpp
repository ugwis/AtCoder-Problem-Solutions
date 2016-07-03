#include <iostream>
#include <bitset>
using namespace std;

int main() {
	int n;
	cin >> n;
	//111011100110101100101000000000
	bitset<32> value(n);
	//cout << value.to_string() << endl;
	int it;
	for(it=(int)value.size()-1;it>=0;it--){
		if(value[it]!=0) break;
	}
	it+=1;
	//cout << "it = " << it << endl;
	//cout << "value.size() = " << value.size() << endl;
	for(int i=0;i<it/2;i++){
		if(value[i]!=value[it-i-1]){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}