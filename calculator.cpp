#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	int n,i,m,z;
	//Comment by Saksham Aryabtg
	
	//Comment by Pawan Bhatt
	cout<<"\n> Press 1 for Addition";
	cout<<"\n> Press 2 for Subtraction";
	cout<<"\n> Press 3 for Multiplication";
	cout<<"\n> Press 4 for Division";
	cout<<"\n> Press 5 for sin and cosec value";
	cout<<"\n> Press 6 for cos value and sec value";
	cout<<"\n> Press 7 for tan and cot value";
	cout<<"\n> Press 8 for log value";
	cout<<"\n\n> Enter the desired operation : ";
	cin>>i;
	switch(i)
	{
		case 1:
			{
				cout<<"\n> Enter first number : ";
				cin>>n;
				cout<<"> Enter second number : ";
				cin>>m;
				cout<<"\nSum is "<<n+m;
				break;
			}
		case 2:
			{
				cout<<"\n> Enter first number : ";
				cin>>n;
				cout<<"> Enter second number : ";
				cin>>m;
				cout<<"\nSub is "<<n-m;
				break;
			}
		case 3:
			{
				cout<<"\n> Enter first number : ";
				cin>>n;
				cout<<"> Enter second number : ";
				cin>>m;
				cout<<"\nMultiplication is "<<n*m;
				break;
			}
		case 4:
			{
				cout<<"\n> Enter first number : ";
				cin>>n;
				cout<<"> Enter second number : ";
				cin>>m;
				cout<<"\nDivision is "<<n/m;
				break;	
			}
		case 5:
			{
				cout<<"\n> Enter the value : ";
				cin>>n;
				cout<<"\n> Press 1 to find sin value";
				cout<<"\n> Press 2 to find cosec value";
				cout<<"\n\n> Enter : ";
				cin>>z;
				if (z==1)
				{
					cout<<"\nSin value is "<<sin(n);
				}
				else if (z==2)
				{
					cout<<"\nCosec value is "<<1/sin(n);
				}
				break;
			}
		case 6:
			{
				cout<<"\n> Enter the value : ";
				cin>>n;
				cout<<"\n> Press 1 to find cos value";
				cout<<"\n> Press 2 to find sec value";
				cout<<"\n\n> Enter : ";
				cin>>z;
				if (z==1)
				{
					cout<<"\ncos value is "<<cos(n);
				}
				else if (z==2)
				{
					cout<<"\nsec value is "<<1/cos(n);
				}
				break;
			}
		case 7:
			{
				cout<<"\n> Enter the value : ";
				cin>>n;
				cout<<"\nPress 1 to find tan value";
				cout<<"\nPress 2 to find cot value";
				cout<<"\n\nEnter : ";
				cin>>z;
				if (z==1)
				{
					cout<<"\ntan value is "<<tan(n);
				}
				else if (z==2)
				{
					cout<<"\ncot value is "<<1/tan(n);
				}
				break;
			}
		case 8:
			{
				cout<<"\n> Enter the value : ";
				cin>>n;
				cout<<"\nlog is "<<log(n);
			}
	}
}
