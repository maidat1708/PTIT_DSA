#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin>>t; 
	while(t--){
		long long tu,mau;
		cin>>tu>>mau;
		while(1){
			if(mau%tu==0) {
				cout<<"1/"<<mau/tu<<endl;
				break;
			}
			int so=mau/tu+1; cout<<"1/"<<so<<" + ";
			tu=tu*so-mau; mau=mau*so;
		}
	}
}
