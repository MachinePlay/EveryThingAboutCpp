# Expression
C++ provides a rich set of operators and defines what these operators do when applied to operands of built-in type. It also allows us to define the meaning  of operators when it applied to operands of class type. We focus on the operators that defined in the language and applied to operands of   
built-in type. We will also look at some operators defined by the library.
An expression is composed of one or more operands and yields a result when it is evaluated. The simplest form of expression is a literal or variable. The result of the expression is the value of the literal or variable.


# Fundemental
There are both unary operators and binary operators. Unary operator, such as adddress-of(&), dereference(*), act on one operand. Binary operator, such as equality(==) and mutiplication(\*) act on two operands. There is also tenary operator that takes three operator. One operator, function call, that takes unlimited numbers of operands.

## Grouping Operators and Operands
Understanding expression with mutiple operators requires understanding the precedence and associativity of the operators and may depends on the order of evaluation of the operands.  

## Ovrloaded Operators
The language defines what the operators mean when applied to built-type and compound type. We can also define what most operators  mean when applied to class type.  
Defination may give a alternative meaning to an existing operator symbol, we refer to them  as overloaded operator. The IO library, such as << , >> and the operators we used with string, vector are all overloaded operator.  When we use the overloaded operators, the meaning of the operator depends on how the operator is defined. However , the number of operands and the precedence and associativity of the operator cannot be changed.

## Operands Conversion
As part of evaluating expression, the operands often converted from one to another. For example the binary operators usually expect operands with same type. The operator can be used on operands with different type so long as the operator can be converted to a common type.

## lvalue and left value
every expression in C++ is either an rvalue  or an lvalue. These means are inherited from C and orignally had an simple mnemonic purpose: lvalue could stand on the left-side of the assignment whereas rvalue could not.  

In C++ the distinction is less simple. In C++, an lvalue expression yields an object or a function. However, some lvalue such as const objects, may not be the left-hand operand of the assignment. Moreover, some expressions yields object but return them as rvalue. Roughly speaking, when we use an object as an rvalue, we use the object's value(it contents). When we use an object as an lvalue we use the object't identity(its location and memory).  

We can use an lvalue when we need an rvalue, but we cannot use an rvalue when we need an lvalue(i.e., a location).`the address-of operator need a lvalue and return an pointer to its operand as rvalue,  the built-in deference and subscript operators`

# order of evaluation 
The precedence specifies how operators are grouped. It says nothing about the order in which the operands are evaluated. In most cases, the order is largely unspecified. It's an error for an expression to refer to and change the same object.  

Expression that do so have undefined behavior.(`like the output expression, cout << i << ++i << endl;`)   
Because this program is undefined, we cannot draw any conclusion about how it might behave.  
There are only `four` operators that do guarantee the order in which the operands are evaluated. `&&,||,?:` and comma `,`. the logical and operator the left-hand operand is evaluated first, and the right-hand operand is evaluated only if the left-hand operand is true. In undefined behavior, what happens is unpredictable.
## Increment and decrement operators
the increment  and decrement operators provide a convient notaitional shorthand for adding or subtracting 1 from a object. The notation raise above mere convenice when we use these operetors with iterators, because many iterators don't support arithmetic.

- use the postfix increment only when necessary
postfix increment store the original value so that it can return the unincremented value itself. If we don't need the unincrementd value, there is no need for the extra work done by postfix increment.

The postfix versions of ++ and -- are used when we want to use the current value of
a variable and increment it in a single compound expression.

## bitwise operator
```
big endian and small endian
  #include <iostream>
  #include <string>
  #include <stdio.h>
  #include <cctype>
  #include <unistd.h>
  #include <stdint.h>
  
  uint32_t swap_32(uint32_t bit_flow) {
      return (((bit_flow & 0xff000000) >> 24) |\
                  ((bit_flow & 0x00ff0000) >> 8)  |\  
                  ((bit_flow & 0x0000ff00) << 8)  |\  
                  ((bit_flow & 0x000000ff) << 24) );
      
  }
  
  
  std::string get_bit(const uint32_t big_num) {
      std::string bit_str{""};
      uint32_t musk = 1;
      for (size_t i = 1; i <= 32; i++) {
          bool is_one = (big_num & musk) ^ musk;
          musk <<= 1;
          if (is_one == false) {
              bit_str.append("1");
          } else {
              bit_str.append("0");
          }   
          if(i % 4 == 0) {
              bit_str.append("-");
          }   
      }   
      return bit_str;
  }
  int main() {
      uint32_t a = 0x12345678; //0001 0010 0011 0100 0101 0110 0111 1000                                                                  
      uint32_t b = 32; //0010 0000
      std::cout << get_bit(a) << std::endl;
      std::cout << get_bit(b) << std::endl;
      std::cout << get_bit(a) << std::endl;
      printf("hex_%x\n", a); //0x0061
      std::cout << get_bit(swap_32(a)) << std::endl;
  
      printf("hex_%x\n", swap_32(a));
      return 0;
  } 
```

- arithmetic conversion: An conversion from one arithmetic type to another.   
For example, The binary operator expect same operands, require the operands to have the same type, but the operators allow different type so long as the operands could automatically convert to desired type if there exitst appropriate defination.  


- associatity: Defines how the operators with same precedence are grouped. Operators can be either left associative or right associative.  

- binary operator: operator takes two operands. usually expected operands to have the same type.  

- cast: explicit conversion  

- compound_expression: expression with mutiple operators and operands.   

- const_cast: A cast that converts a low-level const object to nonconst type or vice 
versa.  

- dynamic_cast: A cast used in combination with inheritance and run-time type identified.  

- expression: the lowest compution in C++. Expression generally apply an operator to one or more operands. Each expression do the evalution of expression and yields an result.  

- implicit conversion: Means that a conversiion is automatically generanted by the compiler. Given an expression needs an patricular type but has an operand with different type. The complier will convert the operand with different type to the desired type if there is an appropriate conversion exists.  

- integral promotion: Means conversion from a smaller integral type to an larger type. Operands of small integral types are usually promoted to most related type when there is an integral promotion is required.  

- lvalue: an expression yields a result  of an object or function.  

- operands: values that the expression operates. 

- operator: denotes the symbols that determines specific action a expression perform.  

- order of evaluation : defines the order operator be evaluated and  how the operator and operands grouped.  

- overloaded operator: operator meaning can be changed when defined for class type.  

- precedence: the order or caculation sequence of the operator.  

- short-circuit evalution: some binary operators such as ||, && has the special defination that guaranteed the second expression only be evaluated at specific condition. 
