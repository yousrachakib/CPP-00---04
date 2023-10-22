# what are intigers and what are floats ?

	- integers are whole numbers without fractional parts, while floats are numbers with both whole numbers and fractional parts. Integers are used for exact calculations, while floats are used for calculations requiring decimal precision.
# Ad-hoc polymorphism :

	- involve creating multiple versions of function or operator with the same name but diffrent types or numbers of arguments.It allows you to define different behaviors for the function based on the types of the arguments.

# Copy constructor :

	- A copy constructor is a special constructor in C++ that creates a new object by initializing it with the contents of an existing object of the same class. It is used to create a copy or clone of an object.

	- The purpose of a copy constructor is to create a new object that is a copy of another object, typically by performing a member-wise copy of the data members of the source object. It is often used when objects are passed by value or when objects are being initialized or assigned to each other.

# Copy assignement :

	-The copy assignment operator is a special member function in C++ that allows an object to be assigned the value of another object of the same class. It is denoted by the operator= symbol and is used to perform a member-wise assignment from the source object to the target object.

	The copy assignment operator has the following signature:

	``` cpp
	
	ClassName& operator=(const ClassName& other);

	```


	- The purpose of the copy assignment operator is to provide a mechanism for objects to be assigned the value of another object after both objects have already been initialized. It is often used when objects need to be updated or reassigned to match the state of another object.

# Operator pverloading :

	- Operator overloading in C++ refers to the ability to redefine or customize the behavior of an operator for user-defined types. C++ allows you to provide special implementations of operators to work with your own classes or structures, allowing you to define how operators should behave when applied to objects of your class.

	- By overloading operators, you can define the behavior of operators such as addition (+), subtraction (-), multiplication (*), division (/), comparison operators (==, !=, <, >, <=, >=), and many others. This allows you to provide intuitive and meaningful operations on objects of your class, similar to how built-in types behave.

# What are FIXED -POINT NUMBER :

	- A fixed-point number is a representation of a real number with a fixed number of digits after the decimal point. It is a way to approximate and represent fractional values using integer arithmetic. Unlike floating-point numbers, which have a dynamic range and precision, fixed-point numbers have a fixed precision and range.

	- In a fixed-point representation, a certain number of bits are reserved for the integer part and a certain number of bits are reserved for the fractional part. The position of the decimal point is fixed, hence the name "fixed-point." The value of the fixed-point number is determined by interpreting the bits in a specific way, usually by assigning a scaling factor to the fractional part.

	- Fixed-point numbers are commonly used in embedded systems and applications where precise control over the range and precision of numbers is required, and where the overhead of floating-point arithmetic is not desirable. They can be more efficient in terms of memory usage and computational speed compared to floating-point numbers, but they come at the cost of reduced dynamic range and precision.

# Floating point numbers representation in Memory :

	- Floating-point numbers in C++ are typically represented in memory using the IEEE 754 standard, which defines the format and encoding of floating-point numbers. The IEEE 754 standard provides two common representations: single-precision (32 bits) and double-precision (64 bits).

	In both representations, the floating-point number is divided into three components: sign, exponent, and mantissa (also called the significand or fraction). The sign bit determines whether the number is positive or negative. The exponent represents the power of 2 by which the mantissa is scaled. The mantissa stores the significant digits of the number.

	* For single-precision floating-point numbers:

		- The sign bit occupies 1 bit.
		- The exponent field occupies 8 bits.
		- The mantissa field occupies 23 bits.
	
	* For double-precision floating-point numbers:

		- The sign bit occupies 1 bit.
		- The exponent field occupies 11 bits.
		- The mantissa field occupies 52 bits.
	
	The sign bit is simply 0 for positive numbers and 1 for negative numbers.
	The exponent field stores the biased exponent value. The actual exponent is obtained by subtracting a bias value from the stored exponent. For single-precision, the bias is 127, and for double-precision, the bias is 1023. This allows both positive and negative exponents to be represented.

	The mantissa field stores the fractional part of the number. However, it does not store leading zeros. Instead, it stores the significant bits of the fraction along with an implicit leading 1 bit. This allows for greater precision.
	