#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char x, char y, char z)
{
	if(n>0)
	{
		TowerOfHanoi(n-1,x,z,y);
		cout<<"Move Top disk of tower "<<x<<" to top of tower "<<y<<endl;
		TowerOfHanoi(n-1,z,y,x);
	}
}
int main()
{
	int n;
	cout<< " Enter n";
	cin>>n;
	TowerOfHanoi(n,'A','B','C');
	
}
