# 1.Basic
------
C++ defines a set of primitive types that include the arithmetic types and a special type named `void`. The arithmetic types represent characters, integers, boolean values, and floating-point numbers.


# 1.1 Arithmetic Types
The arithmetic types are divided into two categories: integral types(which include character and boolean types) and floating-point types.  

The size of arithmetic types(that is the number of bits in the memory device) varies from machines. The Standard guarantees minimum sizes as listed :  

|Type|Meaning|Minimum Size|
|----|----|----|
|bool|boolean|NA|
|char|character|8bits|
|wchar_t|wide character|16bits|
|char16_t|unicode character|16bits|
|char32_t|unicode character|16bits|
|short|short integer|16bits|
|int|integer|16bits|
|long|long integer|32bits|
|long long|long integer|64bits|
|float|single-precision floating-point|6 significant digits|
|double|double-precision floating-point|10 significant digits|
|long double|extened-precision floating-point|10 significant digits|  

The char type is guaranteed to be big enough to hold numeric values corresponding to the chatacters in the machine's basic character set. That is to say a `char` is the same size as a single machine byte.  

# 1.2 Deifined Terms
------
- arguement: Values passed to a function.
- assignment: Obliterates an object's current value.
- block: Sequence of izero or more statements enclosed in curly braces.
- buffer: A region of storage used to hold data. IO facilities often store input or output in a buffer, and read or write independently from actions in the program.
- built-int type: type defined by the program language primitively.
- cerr: ostream object tied to the standard error.
- charater string literal: Another term for string literal.
- class: Facility for defining our own data structures togeger with associated operation.
- class type: A type defined by a class. The name of the class is the class type.
- clog: ostream object tied to the cerr. By default, writes to clog are buffered. Usually used to report information about program execution to a log file.
- comments: Program text that is ignored by the compiler.
- initialize: Given a variabel value at the same time it is created.
- manipulator: Object, such as std::endl, that when read or writen the manipulate the stream itself.
- namespace Machanism fot putting names defined by a library into a single space. Help to avoid to inadvertent name clashed.
- parameter list: Part of the definition of a function, Possibly empty list that specifies what arguements can be used to call a function.  

# 1.3 Variable
A variable privides us a stroage that the program can manipulate. Each variable in C++ has a type. The type determines the size and layout of the variable's memory. The range of values that can be stored within that memory. And the set of the operation can be applied to the variable. C++ programmer tend to refer to variables as 'variables' or 'objects' interchangeably.

- Definitions  
A simple variable definition consists of a tpye specifier, folowed by a list of one or more variable names separated by commas, and ends with semicolon. Each name in the list has the type of the type specifier. A definition my optionally provide an initial value for one or more of the names it defines.  

C++ programmers tend to be cavalier in their use of the term object. Most generally, an object is a region of memory that can contain data and has a type. In this book, we'll follow the more general usage that an object is a region of memory that has a type. We will freely use the term of object regardless of whether the object has built-in or class type, is named or unnamed, or can be read or written.  

- Initializers   
An object that is initialized gets the specified value at the moment it is created. The values used to initialize a variable can be arbitrarily complicated expressions. When a definition defines two or more variables, the name of the object can be visiable immediately. Thus, it is possible to initialie a variable to the value of one defined earlier in the same definition.  

Initialization in C++ is a surperisingly complicated topic and one we will return again and again. Many programmers are confused by the use of = symbol to initialize a variable. It is tempting to think initialization as a form of assignment, but initilization and assignment are different operations in C++. The concept is particularly confusing because in many program languages the distinction is irrelevant and can be ignored.     
