#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter a:"<<endl;
	cin>>a;
	cout<<"Enter b:"<<endl;
	cin>>b;
	
	//c=a/b;
	
	//cout<<"Result:"<<c<<endl;
	
	try
	{
		if(b<=0)
			{
			throw b;
			c=a/b;
			}
			
		c=a/b;
		cout<<"Result:"<<c<<endl;
	}
	
	catch(int e)
	{	
		
		cout<<"Exception: b can not be 0, or -ve"<<endl;
	}

return 0;
}


