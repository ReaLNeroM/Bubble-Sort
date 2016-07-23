#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int val[n];
	for(int i = 0; i < n; i++){
		cin >> val[i];
		for(int j = i; j > 0; j--){
			if(val[j - 1] > val[j]){
				swap(val[j - 1], val[j]);
			}
		}
	}
}
