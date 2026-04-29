# Aim: To study and implement Constructor Overloading

# Software used:
Visual Studio

# Theory:

In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading.

Overloaded constructors essentially have the same name (exact name of the class) and different by number and type of arguments. A constructor is called depending upon the number and type of arguments passed.

While creating the object, arguments must be passed to let compiler know, which constructor needs to be called.

In C++, Operator overloading is a compile-time polymorphism. It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.

In this article, we will further discuss about operator overloading in C++ with examples and see which operators we can or cannot overload in C++.

C++ Operator Overloading: Operator Overloading in C++ is a feature that allows you to redefine the way operators work for user-defined types (like classes). It enables you to give special meaning to an operator (e.g., +, -, *, etc.) when it is used with objects of a class

Benefits of Constructor Overloading:

Constructor Overloading provides various benefits, making it an essential feature for creating flexible and efficient classes.

1.Flexibility in Object Initialization It gives you multiple ways of initializing an object or Multiple Initialization Options.

2.Cleaner and Readable Code with enhanced Code Maintainability By providing different ways of initializing an object, it reduces the need for multiple setter methods or complex initialization logic, avoids redundancy, and provides simpler object creation, which ultimately gives cleaner and more readable code and easier to modify.

3.Encapsulation of Initialization Logic It also encapsulates the initialization logic within the constructor, which means the initialization logic is managed inside the constructor rather than being spread across various methods or outside the class.

4.Simplifies Object Cloning (Copy Constructors) Constructor overloading allows to defined copy constructor to handle both shallow and deep copying objects, this makes sure that the object is easily copied.

# Implementation:
To demonstrate Constructor Overloading in C++ the following cases has been used:

Algorithm for Student Class Program

1.Start

2.Define a class Student with:

Data members:

name (string)

age (integer)

Member functions:

Default constructor: assigns name = "Nia" and age = 18.

Parameterized constructor: accepts parameters n and a, then assigns name = n, age = a.

display() function: prints student’s name and age.

3.In main() function:

Create object s1 using default constructor → initializes name = "Nia", age = 18.

Create object s2 using parameterized constructor with values "Suyashi", 19.

4.Call s1.display() → output student Nia, 18.

5.Call s2.display() → output student Suyashi, 19.

Algorithm for Addition Program

1.Start

2.Define a class Addition with:

3.Data members:

a, b, c (integers).

Constructors:

Default constructor: initializes a = 0, b = 0, c = 0.

Parameterized constructor with 2 arguments: initializes a = x, b = y, c = 0.

Parameterized constructor with 3 arguments: initializes a = x, b = y, c = z.

Member function display(): calculates and prints the sum a + b + c.

4.In main() function:

Create object a1 using default constructor → values a=0, b=0, c=0.

Create object a3 using two-parameter constructor with values (6,7) → values a=6, b=7, c=0.

Create object a4 using three-parameter constructor with values (2,8,9) → values a=2, b=8, c=9.

4.Call a1.display() → output: Sum: 0.

5.Call a3.display() → output: Sum: 13.

6.Call a4.display() → output: Sum: 19.

7.End .

Algorithm for Function Overloading (Addition Program)

1.Start

2.Define a class Addition with:

Function add(int a, int b):

Accepts two integers.

Returns their sum.

Function add(double a, double b, double c):

Accepts three double values.

Returns their sum.

3.In main() function:

Create object a1 of class Addition.

Call a1.add(2.5, 5) → since arguments are double + int, the int gets converted to double, so the add(double,double,double) function is not suitable. Instead, the add(int,int) version works here by type conversion (2.5 becomes 2).

Print result: "Sum of 2.5 and 5 is: 7".

Call a1.add(3.4, 9.7, 2.6) → matches the double,double,double function.

Print result: "Sum of 3.4,9.7,2.6 is: 15.7".

4.End

Algorithm for Complex Number Addition Program

1.Start

2.Define a class Complex with:

Private data members:

real (integer) → stores real part.

imag (integer) → stores imaginary part.

Constructor:

Takes two optional parameters (r, i) with default values 0.

Initializes real = r, imag = i.

Operator overloading function operator+:

Takes another Complex object obj as input.

Creates a temporary object res.

Adds real parts → res.real = real + obj.real.

Adds imag parts → res.imag = imag + obj.imag.

Returns res.

Function print():

Prints complex number in the form real + i imag.

3.In main() function:

Create object c1 with values (10, 5).

Create object c2 with values (2, 4).

Perform addition using overloaded + operator → c3 = c1 + c2.

Call c3.print() to display the result.

4.End

# Conclusion:

The above codes demonstated the use of COnstructor Overloading in C++.
