// run test
// Applocation - 1

#include <bits/stdc++.h>
using namespace std;

void runTest(vector<int> arr,int n, int s,int e){
    int run = 0;
    for(int i =0;i<n;i++){
        while(i>0 && arr[i]==arr[i-1]) i++;
        if(i<n) run++;
    }

    if(s<run && run<e) cout<<"Null Hypothesis is Accepted"<<endl;
	else cout<<"Null Hypothesis is Rejected"<<endl;
}

int main() {
	int n;
	cin>>n;
	vector<int> arr;
    int s=7,e=18 ;//from table
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	runTest(arr,n,3,18);
}