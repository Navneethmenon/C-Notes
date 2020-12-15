In it's most basic description, a pointer is a memory address. The pointer in C language is a variable which stores the address of the another variable. Pointers, and other tasks, such as dynamic memory allocation, cannot be performed without using pointers. it is also possible to use pointers to dynamically allocate memory. Actually pointers are adjusted in computer memory.     All pointers basically do is store that adress that's it really. Pointers are nothing more than a special type of variable whose whole purpose is to store address of memory. Normal variable stores the value whereas pointers variable stores the address of the variable. Always. C pointers is initialized to null ie; int *p =null.

The value of null pointer is 0. & symbol is used to get the address of the variable.t the value of the variable that the pointer is pointing to.
If a pointer in C is assigned to NULL, it means it is pointing to nothing.
Two pointers can be subtracted to know how many elements are available between these two pointers.
But, Pointer addition, multiplication, division are not allowed.
The size of any pointer is 2 byte (for 16 bit compiler). The pointer in c language can be declared using * (asterisk symbol). It is also known as indirection pointer used to dereference a pointer.
Data type *variable name;

int x = 1;

int *p; // pointer variable declaration

p=&x;

pointers syntax : data type *var name; Example : int *p; char *p

We define a pointer variable, (b) assign the address of a variable to a pointer and (c) finally access the value at the address available in the pointer variable. This is done by using unary operator * that returns the value of the variable located at the address specified by its operand. It is always a good practice to assign a NULL value to a pointer variable in case you do not have an exact address to be assigned. This is done at the time of variable declaration. A pointer that is assigned NULL is called a null pointer. By using pointers we can multiple values from the function. By using pointers dynamic memory can be created according to the program use. By using pointers we can design and develop complex dta structures like STACK, QUEUE, LINKED LIST etc. But failed to protect memory addresses. Pointers always require free memory for dynamically allocated memory.


Comments

