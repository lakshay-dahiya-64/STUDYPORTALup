#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int t,m,n;
int ar[m][n];
cin>>t;
cin>>m>>n;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>ar[i][j];
	}
}
cout<<ar[2][1];
return 0;
}