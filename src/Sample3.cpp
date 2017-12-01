#include <iostream>
#include <string> // for string class

/* 
Sample program to explain the usage of the member functions

member functions are defined inside the class

member functions are defined outside the class using "scope resolution operator (::)"

*/


//Define Rectangular class with two functions

class Rect{
	public:
		int length, breadth;
		
		// Member function defined inside class
		int area(){
			return length*breadth;
		}
		
		//Member function defined outside class
		int perimeter();
};

int Rect::perimeter(){
	
	return 2*(length+breadth);
}


// Main function

int main(){
	
	Rect a;
	
	a.length = 5;
	a.breadth = 4;
	
	std::cout<<"\n Area is : " <<a.area();
	std::cout<<"\n Perimeter is: "<<a.perimeter();
	
	
}
