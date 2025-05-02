#include<iostream>
using namespace std;

class Person{
	public :
		void Read(){
			cout<<"Reading Book"<<endl;
		}
};

class Employee : public Person{
	public :
		void Work(){
			cout<<"Working"<<endl;
		}
};

class Manager : public Employee{
	public :
		void Handle(){
			cout<<"Handling"<<endl;
		}
};

int main(){
	Manager m1;
	m1.Read();
	m1.Work();
	m1.Handle();
}
