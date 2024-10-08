#include<iostream>
using namespace std;
int main()
{
int a[3][3]={1,2,3,4,5,6,7,8,9};
	int r,c;
	for (int r=0;r<=2;r++){
		for (int c=0;c<=2;c++){
		}
	}
	cout<<"output is \n";
	for (int r=0;r<3;r++){
		for ( int c=0;c<3;c++){
			cout<<a[r][c]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"transpose of the output is \n";
	for (r=0;r<3;r++){
		for (c=0;c<3;c++){
			cout<<a[c][r]<<"\t";
		}
		cout<<"\n";
	}
}
