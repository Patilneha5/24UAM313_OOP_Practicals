#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string itemNames[3];
	float prices[3],total;
	int i;
	cout<<"Enter Items And Price - "<<endl;
	for(i=0; i<3; i++)
	{
		cin>>itemNames[i];
		cin>>prices[i];
	}
//	cout<<"Items"<<"\t"<<"Price"<<endl;
//	for(i=0; i<5; i++)
//	{
//		cout<<itemNames[i]<<"\t"<<prices[i]<<endl;
//		total+=prices[i];
//	}
//	cout<<"-------------------------"<<endl;
//	cout<<"Total "<<"\t"<<total;
	
	//DISPLAY ITEMS IN ALIGN
	cout<<endl;
	cout<<endl<<"Items"<<"\t\t"<<"Price"<<endl;
	cout<<"--------------------------------"<<endl;
	for(i=0; i<3; i++)
	{
		cout<<itemNames[i]<<"\t\t"<<setw(5)<<setfill('0')<<prices[i]<<endl;
		total+=prices[i];
	}
	cout<<"--------------------------------"<<endl;
	cout<<"Total"<<"\t\t"<<setw(5)<<total;
	return 0;
	
}
