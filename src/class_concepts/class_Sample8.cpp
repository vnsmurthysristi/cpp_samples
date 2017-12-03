/*
This is sample program to explain concept of Initializer List in C++

*/

#include<iostream>
#include<string>

using namespace std;


/*
class Base{
	public:
		Base(int value){
			std::cout<<"\n Base Class Constructor is called \n Value is\t:"<<value;
		}
};


class InitilizerList : public Base{
	
	public:
		InitilizerList(){
			Base b(10);
			std::cout<<"\n InitilizerList Class Constructor is called";
		}
};


// Main Fucntion

int main(){
	
	InitilizerList i;
	
}
*/



/*

Base calss arguement is passed during InitilizerList class constructor itself not inside the constructor

*/


class Base{
	public:
		Base(int value){
			std::cout<<"\n Base Class Constructor is called \n Value is\t:"<<value;
		}
};


class InitilizerList : public Base{
	
	public:
		InitilizerList() : Base(10){
			//Base b(10);
			std::cout<<"\n InitilizerList Class Constructor is called";
		}
};

class Reference{
	private:
		int &ref;
	public:
		Reference(int &ref) :ref(ref){
			std::cout<<"\n Reference Class Constructor and ref value is \t"<<ref;
		}
};

// Main Fucntion

int main(){
	
	int ref=100;
	InitilizerList i;
	Reference r1(ref);
	
}

