#include<iostream>
using namespace std;
int main()
{
	int testcase;
	cout<<"enter the no. of test cases";
	cin>>testcase;
	while(testcase--)
	{
		int size,element,count=0;
		cout<<"Enter the size of array";
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		cout<<"Search Element=";
		cin>>element;
		for(int i=0;i<size;i++)
		{
			if(arr[i]==element)
			{
				count=1;
				cout<<"element found";
				cout<<"No. of comparison"<<i+1;
				break;
				
			}
		}
		if(count==0)
		cout<<"element not found";
		
	}
}
