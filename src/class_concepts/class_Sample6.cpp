/*
This is sample program to explain concept of Constructors


While defining a contructor you must remeber that the name of constructor 
will be same as the name of the class, and contructors never have return type.

Constructors can be defined either inside the class definition or outside 
class definition using class name and scope resolution :: operator.

		class A
		{
		 int i;
		 public:
		 A(); //Constructor declared
		};
		
		A::A()   // Constructor definition
		{
		 i=1;
		}


Types of Constructors

		1. Default Constructor
		2. Parametrized Constructor
		3. Copy Constructor


	1. Default Constructor
	
	Default constructor is the constructor which doesn't take any argument. It has no parameter.
	
	2. Parametrized Constructor
	
	These are the constructors with parameter. Using this Constructor you can provide 
	different values to data members of different objects, by passing the appropriate values as argument.
	
	3. Copy Constructor
	
	These are special type of Constructors which takes an object as argument, 
	and is used to copy values of data members of one object into other object

*/

#include<iostream>
#include<string>
#define pi 3.14159;

// sample Class for Default Constructor

class Square{
	
	public:
		int side;
	
	public:
		Square(){	//Default Constructor
			side = 10;
		}

};

// sample Class for Parametrized Constructor

class Cube{
	public:
		int side;
		 
		Cube(int x) //Parametrized Constructor
		  {
		   side=x;
		  }
};

// sample Class for Copy Constructor

/*

	{

		
		 To be updated Later
		

	}
*/


class Area{
	public:
		double area;
		
		Area(int side){
			area = side * side;
		}
		
		//Constructor Overloading 
		Area(int length,int breadth){   
			area = length * breadth;
		}
		
		Area(double radius);
		
};

		//Constructor Overloading 
		
		// //Constructor definition using scope resolution operator ::
		
		Area::Area(double radius){
			area = 3.14159 * radius * radius;
		}



// Main Function

int main(){
	
	Square sq1;
	Cube c1(10),c2(20);
	
	std::cout << "\n Default Constructor example \n Side of Square: " << sq1.side;
	std::cout << "\n\n\n Parametrized Constructor example \n Side of Cube (C1): " << c1.side<<"\n Side of Cube (C2): "<<c2.side;
	
	Area square(10), rectangle(5,4), circle(5.0);
	
	std::cout << "\n\n\n Example of Constructor Overloading";
	std::cout << "\n Area of Square \t:"<<square.area;
	std::cout << "\n Area of Rectangle \t:"<<rectangle.area;
	std::cout << "\n Area of Circle \t:"<<circle.area;
}
