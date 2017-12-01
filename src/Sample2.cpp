#include <iostream>
#include <string> // for string class

/* 
Sample program to explain Accessing Private Data Members of class
*/


//Define Student Class

class Student{
	private:
		int rollno;
	
	public:     // public accessor and mutator functions
	
	int getRollno()
	{
	return rollno;
	}
	
	void setRollno(int i)
	{
	rollno=i;
	}

};

//		Main Function

int main()
{
	Student A;
	
	//Assign the student object A with value
	//A.rollno = 101; // Compile time error
	A.setRollno(101);
	//	print the student detials

	//std::cout<< A.rollno <<"\n"; //Compile time error
	std::cout<< A.getRollno() <<"\n";

}
