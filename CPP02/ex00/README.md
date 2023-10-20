# what are intigers and what are floats ?

	* integers are whole numbers without fractional parts, while floats are numbers with both whole and fractional parts. Integers are used for exact calculations, while floats are used for calculations requiring decimal precision.
# Ad-hoc polymorphism :

	* involve creating multiple versions of function or operator with the same name but diffrent types or numbers of arguments.It allows you to define different behaviors for the function based on the types of the arguments.

# Copy constructor :

	* A copy constructor is a special constructor in C++ that creates a new object by initializing it with the contents of an existing object of the same class. It is used to create a copy or clone of an object.

	* The purpose of a copy constructor is to create a new object that is a copy of another object, typically by performing a member-wise copy of the data members of the source object. It is often used when objects are passed by value or when objects are being initialized or assigned to each other.

# Copy assignement :

	*The copy assignment operator is a special member function in C++ that allows an object to be assigned the value of another object of the same class. It is denoted by the operator= symbol and is used to perform a member-wise assignment from the source object to the target object.

	The copy assignment operator has the following signature:

	``` cpp
	
	ClassName& operator=(const ClassName& other); ```

	* The purpose of the copy assignment operator is to provide a mechanism for objects to be assigned the value of another object after both objects have already been initialized. It is often used when objects need to be updated or reassigned to match the state of another object.