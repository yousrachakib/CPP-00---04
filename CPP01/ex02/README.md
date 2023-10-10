

**The purpose of this exercise is to help you understand and demystify the concept of references in C++.**

## Reference in C++:
in C++, a reference is like an alternative name or an alias for an existing variable. 
It allows you to access and manipulate the value of a variable using a different name.
When you create a reference, it refers to the same memory location as the original variable. 
This means that any changes made to the reference will affect the original variable, and vice versa. 
They are like two different names for the same thing.

## References and pointers in C++ are similar in that they both allow you to indirectly access and manipulate variables. However, there are some key differences between the two:
    -> Initialization and Nullability:
    References must be initialized when they are declared and cannot be null. Pointers, on the other hand, can be declared without initialization and can be assigned a null value using the special value nullptr.

    ->Syntax: 
    References are declared using the ampersand (&) symbol, while pointers are declared using the asterisk (*) symbol.

    ->Address Manipulation: 
    Pointers allow direct manipulation of memory addresses by using operations such as pointer arithmetic and reassigning the pointer to different memory locations. References, 
    once initialized, are fixed to refer to the same memory location throughout their lifetime and cannot be reassigned to refer to a different variable.

    ->Memory Allocation and Deallocation: 
    Pointers can be used to dynamically allocate and deallocate memory using new and delete operators. References, on the other hand, are simply aliases for existing variables and do not control memory allocation. 
    They cannot be used to allocate or deallocate memory.

    ->Syntax and Usage: 
    Pointers use the dereference operator (*) to access the value pointed to by the pointer. References, on the other hand, do not require a separate operator to access the value. 
    You can use the reference directly as if it were the original variable.

    ->Passing to Functions: 
    When passing a variable to a function, using a reference allows you to directly manipulate the original variable within the function. Pointers can also be used for this purpose, 
    but they require explicit dereferencing to access and modify the original variable.