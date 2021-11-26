// Pointers Assignment
// Admission: 147683
//

#include <iostream>
using namespace std; 

int main()
{
  //Declare double variables called number1 and number2
	//initialize number1 to 7.3
	double number1, number2; 
	number1 = 7.3; 

	//Declare a double point variable called ptr
	double *ptr; 

	//Assign to pointer variable ptr the address of variable number1
	ptr = &number1; 

	//Print the value of the object pointer to by ptr
	cout << "The value of the object pointer is: " << &number1 << endl; 

	//Assign to variable number2 the value of the object pointed to by ptr (use the ptr variable to do this)
	double *number2 = &number1; 
	
	//Print the address of variable number1
	cout << "The address of the variable number is: " << number2 << endl; 

	/*Print the address stored in ptr*/
	cout << "The address stored in ptr is: " << ptr << endl; 




}

