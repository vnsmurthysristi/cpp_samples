/*
This is sample program to explain Function OverLoading

Function Overloading

If any class have multiple functions with same names but different parameters then they are said to be overloaded. 
Function overloading allows you to use the same name for different functions,
to perform, either same or different functions in the same class.

Function overloading is usually used to enhance the readability of the program. 
If you have to perform one single operation but with different number or types of arguments,
then you can simply overload the function.

Ways to overload a function

1. By changing number of Arguments.
2. By having different types of argument.

*/

#include<iostream>
#include<string>

/*

Define a area class with function to compute area, 

later use the same function to calcualte area for rectangle which is example for changing nuber of arguments

circle area computation is an example for having different type of argument

*/

class Geometry{
	
	public:
		
		// square area calculation
		int area(int side){
			return side * side;
		}
		
		// Rectangle area calculation	
		
		int area(int length, int breadth){
			return length * breadth;
		}
		
		// circle area calculation
		
		double area(double radius){
			return 3.14159 * radius * radius;
		}
};

// Main function

int main(){
	
	Geometry sq, rect, circle;
	
	std::cout << "\n Square area is: " << sq.area(4);
	std::cout << "\n Rectangle area is: " << rect.area(4,3);
	std::cout << "\n Circle area is: " << circle.area(1.5);
		 
}


