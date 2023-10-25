 # INHERITANCE :

- In C++, inheritance is a feature that allows a class to inherit properties (member variables and member functions) from another class, called the base class or parent class. The class that inherits from the base class is called the derived class or child class.

- Inheritance is used to establish an "is-a" relationship between classes, where the derived class is a specialized version of the base class. The derived class inherits the characteristics (data and behavior) of the base class and can also add its own unique characteristics or override the behavior of the base class.

- The syntax for declaring a derived class that inherits from a base class is as follows:

```cpp
	class DerivedClassName : accessSpecifier BaseClassName {
    // Class members and functions
};
```

- Here, DerivedClassName is the name of the derived class, and BaseClassName is the name of the base class. The accessSpecifier specifies the access level for the inherited members from the base class (e.g., public, protected, or private).

- There are three types of access specifiers that can be used in inheritance:

	* **public**: Public members of the base class become public members of the derived class. Protected members of the base class become protected members of the derived class. Private members of the base class are not accessible directly from the derived class.

	* **protected**: Public and protected members of the base class become protected members of the derived class. Private members of the base class are not accessible directly from the derived class.

	* **private**: Public and protected members of the base class become private members of the derived class. Private members of the base class are not accessible directly from the derived class.

- The derived class can access the inherited members from the base class using the scope resolution operator (::). It can also override the base class's member functions by providing its own implementation.

- Inheritance supports various concepts like single inheritance (one derived class inherits from one base class), multiple inheritance (one derived class inherits from multiple base classes), hierarchical inheritance, and more.

- In summary, inheritance in C++ allows you to create derived classes that inherit properties from base classes, enabling code reuse, modularity, and the expression of hierarchical relationships between classes.
