#include <iostream>
#include <string> // for string class

/* Sample to explain Accessing Public Data Members of Class

*/


//Define Student Class

class Student{
	public:
		int rollno;
		std::string name;
};

//		Main Function

int main(){
	Student A;
	Student B;

	//Assign the student objects (A,B) with values
	A.rollno = 101;
	A.name = "Sristi";

	B.rollno= 102;
	B.name = "V N S Murthy";

	//	print the student detials

	std::cout <<"Name and Roll no of A is : "<< A.name << "\t" << A.rollno << "\n";
	std::cout <<"Name and Roll no of B is : "<< B.name << "\t" << B.rollno << "\n";


}
