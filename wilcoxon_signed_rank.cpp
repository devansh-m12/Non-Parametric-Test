// The Wilcoxon signed Rank
// Applocation - 1

#include <bits/stdc++.h>
using namespace std;


void runTest(vector<double> arr1,vector<double> arr2,int n, double crcVal){

	unordered_map<double,double> rank; // to store rank
    vector<int> pos;
	vector<int> neg;
    for(int i = 0;i<n;i++){
		int val = abs(arr1[i]-arr2[i]);
         if(arr1[i]>arr2[i]){
			pos.push_back(val);
		 }
		 else {
			neg.push_back(val);
		 }
	}
    vector<double> temp;
    temp.push_back(-1); // to make 1-index vector
    for(int i = 0;i<neg.size();i++) temp.push_back(neg[i]);
    for(int i = 0;i<pos.size();i++) temp.push_back(pos[i]);
    sort(temp.begin(),temp.end());

    for(int i = 1;i<temp.size();){
        int j =i+1;
        int sum = i;
        if(j<temp.size() && temp[j]==temp[j-1]){
            sum+=j; 
            j++;
        }
        double si = j-i;
        rank[temp[i]]=sum/si;
        i=j;
    }

    double R = 0; // rank Sum
    double sigma = sqrt((n*(n+1)*(2*n+1))/24);
    double miu = (n*(n+1))/4;

    // rank sum
    if(pos.size()>neg.size()){
          for(int i =0;i<neg.size();i++){
            R+=rank[neg[i]];
          }
    }
    else {
          for(int i =0;i<pos.size();i++){
            R+=rank[pos[i]];
          }
    }
    if(n<30){
		cout<<"Rank Sum : "<<R<<endl; 
		cout<<"Critical Value : "<<crcVal<<endl;
		if(R>crcVal) cout<<"Null Hypothesis is Accepted"<<endl;
		else cout<<"Null Hypothesis is Rejected"<<endl;
		return;
	}

    double Z = (R-miu)/sigma; // Z tab
    Z = abs(Z);
    cout<<"Rank Sum : "<<R<<endl; 
    cout<<"Z tab : "<<crcVal<<endl;
    cout<<"absolute Z cal : " <<Z<<endl;
    if(Z>crcVal) cout<<"Null Hypothesis is Accepted"<<endl;
	else cout<<"Null Hypothesis is Rejected"<<endl;
}

int main() {
	int n;
	cin>>n;
	vector<double> arr1;
    vector<double> arr2;
    double crcVal = 2; //from table
	for(int i=0;i<n;i++){
		double x;
		cin>>x;
		arr1.push_back(x);
	}
    for(int i=0;i<n;i++){
		double x;
		cin>>x;
		arr2.push_back(x);
	}
	runTest(arr1,arr2,n,crcVal);
}