#include<iostream>
using namespace std;

int findDivisor(int x)
{
	int y=2;
	while(1)
	{
		if(x%y==0)break;
		y++;
	}
	return y;
}

int main()
{
	int a;
	cout<<"Test case 1: = "<<findDivisor(10)<<endl;
	cout<<"Test case 2: = "<<findDivisor(97)<<endl;
	cout<<"Test case 3: = "<<findDivisor(221)<<endl;
	/*cin>>a;
	cout<<findDivisor(a);*/
	return 0;
}
