// 15.10.2021
#include<iostream>
using namespace std;

//function prototype
double calc(int b,int h);

int main()
{
	cout<<"Please enter the base length: ";
	int base;
	cin>>base;
	
	cout<<"Please enter the base height: ";
	int height;
	cin>>height;
	
	//calculation
	double s;
	s=calc(base, height);
	
	//output
	cout<<"the area of triangle= "<<s<<" unit square"<<endl;
	return 0;
}
//function definition
double calc(int b,int h)
{

	double surf=(b*h) / 2.0;
	return surf;
}
