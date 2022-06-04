#include<iostream>
#include <vector>
#include<numeric>
using namespace std;

vector<int> MonkeyCount(const int n) {
	vector<int> result(n);
	iota(result.begin(), result.end(), 1);
	return result;
}
int main() {
	int n = 10;
	MonkeyCount(n);
}