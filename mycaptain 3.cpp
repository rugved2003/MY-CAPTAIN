#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Check your age is eligible for voting or not eligible for voting";
	cout<<"\nEnter your age here : ";
	cin>>age;
	cout<<"------------------------------------------------";
	if(age>=18)
	{
		cout<<"\nYou are eligible for voting";

	}
	else
		cout<<"\nSorry You are not eligible for voting  ";
		cout<<"\nThank you have a nice day";
		cout<<"\n------------------------------------------------";
	return 0;
}
