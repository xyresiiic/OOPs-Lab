#include <iostream>
using namespace std;


//<==================================================================Inheritance=================================================================================>



class father{
	public:
		void car()
		{
			cout<<"Father car-> tata curve"<<endl;
		}
		void bike()
		{
			cout<<"Father bike-> Xtream"<<endl;
		}
	father()
	{
		cout<<"father class comstructror"<<endl;
	}
};


class child1:public father{ 
	
	public:
	void phone()
		{
			cout<<"child1's phone-> samsung s25 ultra"<<endl;
		}
		void laptop()
		{
			cout<<"child1's laptop-> Victus"<<endl;
		}
	child1()
	{
		cout<<"child1 s- class comstructror"<<endl;
	}
};

class child2:public father{ 
	
	public:
	void cycle()
		{
			cout<<"chid2's cycle-> herculas"<<endl;
		}
		void bikee()
		{
			cout<<"child2's bike-> raider"<<endl;
		}
	child2()
	{
		cout<<"child2 s class comstructror"<<endl;
	}
};


int main()
{
  child1 s1;
  child2 s2;
  s1.car();
  s1.bike();
  s1.phone();
  s1.laptop();
  s2.cycle();
  s2.bikee();
  
  	
}
