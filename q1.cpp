#include<bits/stdc++.h>
using namespace std;
int main()
{
	double i, j, m, k;
	cin>>i>>j>>m>>k;
	double N = i*i + j*j + i*j;
	double Q = sqrt(3*N);
	double C = m*k*N;
	cout<<N<<" "<<Q<<" "<<C<<"\n";
	return 0;
}
