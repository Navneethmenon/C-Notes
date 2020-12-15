FUNCTION IN C

Functional programs do not have assignment statement ,that is, the value of a variable in a functional program never
changes once defined. Every c program has at least one function, which is main(), and all the most trivial, programs
can define additional function.
I know function names can be very expressive. How you divide up your code among
But you still have to support your ideas and explain the conclusion you make to be seen as competent.
DEFINING A FUNCTON
The general form of a function definition in c programming language is as follow:
Return_type function_ name( parameter body of the function
In the context of programming, a function is a named sequence of statement that performs a desired operation.
FUNCTION DECLARATION : A function declaration is statement containing a function prototypr. The actual body of the
function can be define separately.

A function declaration has the following parts-
Return_typefunction_name(parame

For the above defined function max(),the function declaration is as follow-
Intmax(int num1,int num2,);

Parameter names are not important in function declaration only their type is required so the following is also valid

declaration-
Intmax(int,int);

Function declaration is required when you define when you define a function in another file.
.Return Type- Void function are created and used just like value returning functions except they do not return a value
after the function executes . In this case, the return_type is the keywords vold.
.Parameters- This article describes how to defined and use parameter in your azure resource manager template .
. Function body – A function definition provides the actual body of the function.
/* function returning the max bet
intmax(int num1 ,int num2 ){
/* local variable declaration
intresult ;
If(num1 >num2)
result = num1 ;
else
result = num2 ;
return result ;
}
We have kept max () alomg with main () and compiled the source code. While running the final executable, it would produced the following result-
Max value is : 200

