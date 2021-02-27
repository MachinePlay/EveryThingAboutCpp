# Function
Function is a block of code with a name. We will describe how the arguments pass to and the value returns from a function. In C++, functions can be overloaded, it means that we can use the same name for serveral function overloaded. We will talk about how to define overload function and how the compiler selects the matching vserion for  a particular function call from serveral overloaded functions. And ends with pointer to function  


# Basics of function 
```
int fact(int val) {
    int  ret = 1;
    while(ret < 100) {
        ret <<= 1;
    }
    return ret;
}
```  

The function is named fact. It takes one int for parameter and returns an int value.  
Inside the while loop, we compute the factorial by bitwise operator that add the value by double the value of ret by left-shifting on each time until it reach to 100. The return state ends excution of fact and returns the value of ret.


# Parameters and Arguements
Arguements are the initializers of function's parameters. The first arguement initialize the first parameters, the second arguement initialize the second parameters, and so on. Although we know which order the arguement initialize the parameters, there is no gaurantees about the order in which the arguments are evaluated.
> NOTICE that
Parameters's names are is optional. However, there is no way to use unnamed parameters.  Therefore,  parameters ordinarily have names. Occasionally a function is not used. Such parameters are often unused, to indicate that they are not used. Leaving parameters unnamed don't change the numbers of the arguments  that a call must supply. A call must supply arguments for every parameter, even if the parameter is unused.  


# Scope and Lifetime
- A scope of name is a part of program's text in which that name is visible.
- The lifetime of an object is the time that the time that the object exists during the program's execution.  

As we've seen, a function is a statement block. As usual, the block forms a new scope where we can define variables. The parameters and variables we defined in the scope are refered to as 'local variables'. They are local to that function and hide for an outer scope.
