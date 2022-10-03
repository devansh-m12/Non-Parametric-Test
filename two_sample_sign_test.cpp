// two sample sign test
// Applocation - 1

#include <bits/stdc++.h>
using namespace std;


void runTest(vector<int> arr1,vector<int> arr2,int n, int crcVal){

	int pos = 0;
  int neg = 0;
  for(int i = 0;i<n;i++){
    if(arr1[i]>arr2[i]) pos++;
    else neg++;
  }
  int testval = min(pos,neg);

    cout<<"no. of positive : "<<pos<<endl; 
    cout<<"no. of negative : "<<neg<<endl;
    cout<<"critical value : " <<crcVal<<endl;
    if(testval>crcVal) cout<<"Null Hypothesis is Accepted"<<endl;
	else cout<<"Null Hypothesis is Rejected"<<endl;
}

int main() {
	int n;
	cin>>n;
	vector<int> arr1;
    vector<int> arr2;
    int crcVal = 1; //from table
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr1.push_back(x);
	}
    for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr2.push_back(x);
	}
	runTest(arr1,arr2,n,crcVal);
}