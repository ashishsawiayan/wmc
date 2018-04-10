#include<bits/stdc++.h>
using namespace std;
int main()
{
	int C, N, K, M;
	cout<<"Enter the Total Bandwidth:\n";
	cin>>C; 
	
	cout<<"Bandwidth of full duplex channel:\n";
	cin>>M; 	
	M *= 2;
	
	cout<<"N: ";
	cin>>N; 
	
	K = C/(M*N);
	cout<<"\nNo. of channels per cell is: "<<K<<endl;
	
	return 0;
	
}
