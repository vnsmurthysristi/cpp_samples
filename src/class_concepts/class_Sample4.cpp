/*
This is sample program to explain Types of Member Functions

1. Simple functions
2. Static functions
3. Const functions
4. Inline functions
5. Friend functions

*/

#include<iostream>
#include<string>


class Human{
	public:
		int rollno;
		std::string name;
		
		/*
		Simple Member functions
		These are normal functions without any specific keywords
		*/
		
		void printdetails(){ // simple function
			std::cout<< "\n Name: "<<name;
			std::cout<< "\n Roll No: "<<rollno;
		}

		/*
		Static Member functions
		
		function is defined with static keyword as prefix
		
		These function can be called using scope resolution operator, no need for objects
		
		These functions cannot access ordinary data members and member functions, 
		but only static data members and static member functions.
		
		*/
		
		static void printcommon(int x){
			
			std::cout<< "\n Number of Eyes for Human is: 2";
			std::cout<< "\n Number of Ears for Human is: 2";
			std::cout<< "\n Number of Hands for Human is: 2";
			std::cout<< "\n Number of Legs for Human is: 2";
			std::cout<< "\n Number of mouth for Human is: 1\n X = "<<x;
		}
		
		
		/*
		Const Member functions
		
		
		
		*/
		
		/*
		Inline functions
		
		Inline functions in C++ are similar to macro in C launguage
		The problem with macro is it will not allows us to having spacing in expression
		
		Where as Inline functions allows us to declare a function with full body as macro
		during the compilation the macro variable/inline functions is replaced with full function code
		
		Inline functions are actual functions, which are copied everywhere during compilation, 
		like preprocessor macro, so the overhead of function calling is reduced. 
		All the functions defined inside class definition are by default inline, 
		but you can also make any non-class function inline by using keyword inline with them.
		
		// inline function declaration
		inline void fun(int a) 
		{ 
		  return a++; 
		}
		
		Large Inline functions cause Cache misses and affect performance negatively.
		
		*/
		
		inline void fun(int a) 
		{ 
		  std::cout<<"\n"<< ++a;; 
		}
		
		/*
		Friend functions
		
		*/

};




// Main Function

int main(){
	
	Human a,b;
	
	a.name = "ABC";
	a.rollno = 101;
	
	a.printdetails();
	std::cout<<"\n";
	
	
	b.name = "XYZ";
	b.rollno = 103;
	
	b.printdetails();
	std::cout<<"\n";

	////////////////////////////////
	

	a.printcommon(5);
	std::cout<<"\n";
	b.printcommon(10);
	std::cout<<"\n";
	Human::printcommon(15);
	std::cout<<"\n";
	
	a.fun(2);
	b.fun(20);
}
