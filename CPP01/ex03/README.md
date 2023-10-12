# pointers to Members :

	* Pointers to Members in c++ provides a way to refer to members (variables and functions) of a class without acessing a specific instance of the class. They are useful in cases where you want to store or pass around references to class members for later use or dynamic invocation.

## They are two main types of ponters to Members in C++:

	* Pointer to DATA MEMBER:
		- it is used to point to a member variable to a class.
		- The syntax for declaring a pointer to a data member is : type class::*ptr.
		- Here, type is the data type of the member variable, and class is the class containing the member variable.
		- Example: int Myclass::*ptr declares a pointer to an integer member variable of the class Myclass.
	
	* Pointer to MEMBER FUNCTION :
		- it is used to point to a Member function of a class.
		- The syntax for declaring a pointer to a member function is : return_type (class::*ptr)(arguments).
		- Here, return_type is the return type of the member function, and arguments are the arguments expected by the member function.
		- Example : void Myclass::*ptr(int) declares a pointer to a member function of the class Myclass that takes an integer arguments and returs void.
To use a pointer to a member, you need an instance of the class or an object reference to acess the Member. you can then use the pointer to acess or call the member.


# &: The ampresand:

	*the ampresand symbol indicate that the parameter is a reference to an object rather than a copy of the object itself.

# const keyword:

	*the const keyword is used to indicate that the object being reffered to is constant and cannot be changed within the scope od the function.

# What are the benifits of passing an argument as a reference :

	* Passing by reference avoids creating a copy of the object, which can be more effecient.
	* avoiding unecessary copies, you can work with the original argument directly without creating a duplicate copy. this can be important when dealing with memory constraints or to avoid unecessary overhead.