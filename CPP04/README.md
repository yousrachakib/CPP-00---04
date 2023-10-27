
# Polymorphism:

## Virtual function:

- virtual functions are an important feature of object-oriented programming that enables polymorphism. They allow a derived class to override the implementation of a function defined in a base class.

    * Virtual functions are declared in the base class using the virtual keyword. For example:
    ```cpp
    class Base {
    public:
    virtual void foo();
    }   ;
    ``` 

    * Derived classes can override the virtual functions by providing their own implementation. The function signature in the derived class must match the base class function. The virtual keyword is not required in the derived class. For example:
    ```cpp
    class Derived : public Base {
    public:
    void foo(); // Overrides the foo() function in the Base class
    };
    ```

    * When a derived object is accessed through a pointer or reference of the base class, the appropriate virtual function is called based on the actual type of the object at runtime. This is known as dynamic dispatch or late binding. For example:
    ```cpp
    Base* ptr = new Derived(); // Create a Derived object and assign it to a Base pointer
    ptr->foo(); // Calls the overridden foo() function in the Derived class
    ```

    * it's common to make the base class destructor virtual to ensure that the appropriate destructor is called when deleting derived objects through a base class pointer. This helps avoid memory leaks. For example:
    ```cpp
    class Base {
    public:
    virtual ~Base();
    };
    ```
