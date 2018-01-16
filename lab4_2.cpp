#include<iostream>
using namespace std;

float findDistance(float u,float a,float t)
{
	float s;
	return s=(u*t)+((a*(t*t))/2);
}

int main()
{
	float u,a,t;
	cout<<"Test case 1: s = "<<findDistance(0,0.5,1)<<endl;
	cout<<"Test case 2: s = "<<findDistance(1.5,-1,2)<<endl;
	cout<<"Test case 3: s = "<<findDistance(5,4,3)<<endl;
	/*cin>>u;
	cin>>a;
	cin>>t;
	cout<<findDistance(u,a,t);*/
	return 0;
}
