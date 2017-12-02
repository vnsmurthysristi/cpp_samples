/*
This is sample program to explain concept of Destructor

Destructor is a special class function which destroys the object as soon as 
the scope of object ends. The destructor is called automatically by the compiler
when the object goes out of scope.

The syntax for destructor is same as that for the constructor, 
the class name is used for the name of destructor, with a tilde ~ sign as prefix to it


Destructors will never have any arguments.

*/

#include<iostream>
#include<string>


class A{
	public:
		A(){
		std::cout << "\nConstructor called\n";
	}
	
	~A(){
		std::cout << "\nDestructor called\n";
 	}
	
};

//	Main Function

int main(){
	A obj1;   // Constructor Called
 	int x=1;
 	
	if(x)
	{
	   A obj2;  // Constructor Called
	}   // Destructor Called for obj2
} //  Destructor called for obj1
