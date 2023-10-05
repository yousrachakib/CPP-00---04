# CPP-00---04
Introduction to c++ 
## Exercise 01: My Awesome PhoneBook

The goal of this exercise is to create a simple phonebook application using C++. The phonebook should be able to store contacts and perform basic operations such as adding new contacts and searching for existing contacts. The exercise provides two classes that need to be implemented:

### PhoneBook:

It has an array to store contacts.
It can store a maximum of 8 contacts. If a user tries to add a 9th contact, the oldest contact in the phonebook should be replaced with the new one.
Dynamic allocation (using the new keyword) is not allowed.
### Contact:

Represents a phonebook contact and holds information such as first name, last name, nickname, phone number, and darkest secret.
Here are some important points to keep in mind:

The phonebook and contacts should be instantiated as instances of their respective classes.
The classes should have appropriate access modifiers (public, private) for their members. Anything that will always be used inside a class should be private, and anything that can be used outside the class should be public.
The program should prompt the user to enter one of three commands: ADD, SEARCH, or EXIT.
Command Descriptions:

### ADD: Allows the user to save a new contact.

The user will be prompted to input the information of the new contact one field at a time.
Once all the fields are completed, the contact should be added to the phonebook.
A contact cannot have empty fields.
SEARCH: Displays the saved contacts as a list.

The contact list should be displayed in four columns: index, first name, last name, and nickname.
Each column should be 10 characters wide and separated by a pipe character (|).
If the text in a column is longer than 10 characters, it should be truncated and the last displayable character should be replaced by a dot (...).
After displaying the contact list, the user should be prompted to enter the index of the contact they want to display.
If the index is out of range or incorrect, define a relevant behavior.
If the index is valid, display the contact information, one field per line.
### EXIT: Quits the program and the contacts are lost.

Other Points to Consider:

The program should continue prompting for commands until the user enters the EXIT command.
Use relevant error handling and input validation techniques to handle incorrect or invalid user input.
Design your classes and program structure in a way that allows you to easily manage contacts and perform the required operations.
For further reference and understanding of string manipulation and formatting, you can refer to the following resources:

# What is a class in c++ ?
* a class is a construct that allows you to define a blueprint for creating objects. It is a fundamental building block of object-oriented programming (OOP). A class encapsulates data (attributes) and functions (methods) that operate on that data.
  
***Private Members:***
  - Private members of a class are the class members that are only accessible within the class itself. They are not accessible from outside the class, including other functions or objects. Private members are used to hide internal implementation details and provide encapsulation, which is an important principle of OOP.
Here are some characteristics of private members:
**- Private members are declared using the private access specifier within the class.**
    
**- Private members can only be accessed by other member functions of the same class.**

**- Private members cannot be accessed directly from objects of the class or from outside functions or objects.**

**- Private members can be used to store and manipulate data that should not be directly accessible or modified from outside the class.**

**- Private members are typically accessed using public member functions, known as getters and setters, which provide controlled access to private data.**
  
***Example:***
``` cpp
  class MyClass {
private:
    int privateData;  // Private data member

public:
    void setPrivateData(int value) {
        privateData = value;  // Setter function to modify privateData
    }

    int getPrivateData() {
        return privateData;  // Getter function to access privateData
    }
};

int main() {
    MyClass obj;
    obj.setPrivateData(42);
    int data = obj.getPrivateData();
    // Accessing privateData indirectly through public member functions
    // data is now 42
    return 0;
}
```
***Public Members:***
* Public members of a class are accessible from anywhere in the program, including other functions, objects, and classes. They define the interface of the class, allowing external code to interact with the class and its objects.
Here are some characteristics of public members:
**- Public members are declared using the public access specifier within the class.**
**- Public members can be accessed by other member functions of the same class, as well as from outside the class.**
**- Public members can be accessed directly from objects of the class or through pointers and references to the class objects.**
**- Public members can include data members and member functions.**
**- Public member functions are often used to perform operations on the class data or provide access to the data.**

***Example:***
``` cpp
class MyClass {
public:
    int publicData;  // Public data member

    void publicFunction() {
        // Public member function
        // Can access publicData directly
        // Perform operations
    }
};

int main() {
    MyClass obj;
    obj.publicData = 42;  // Accessing publicData directly
    obj.publicFunction();  // Accessing publicFunction
    return 0;
}
```


***In summary, private members of a class are used to encapsulate and hide internal implementation details, while public members define the interface and allow external code to interact with the class. This encapsulation and controlled access to data and functions help in achieving data abstraction, information hiding, and maintainability in object-oriented programming.***
