# 类和多态


## const和const expr
我们经常在开发过程中用到常量（constant），通常使用const和constexpr
const定义在运行时不能更改的常量
- const变量必须在初始化时赋值
- 可以在运行时初始化
- 也可以在编译时初始化
```
//we can make variable unchangeable by defining the variables's type as const
//any attempt to assign const variable is an error
const int number = 0; // compile time initialize
const int user_id = get_user_id(); // runtime intialize
```

constexpr是C++11的新特性，允许定义完全在编译期可以确定的常量表达式 constant expression，即literals,
In a large system, it can be diffcult to determine (for certain) that an initializer is a constant expression. We might define a const variable that the initializer was not a constant expression, but we think it's a constant expression.

When we use the variable in a context that requires a constant expression we may discover that the initilizer is not a constant expression.  
e.g:
```
const int sz = get_size();
```

In C++11 standard, we can ask the compiler to varify that variable is a constant expression by declaring the variable in a constexpr declaration.

Variables declared as constexpr are implcitly const and must be initialized by constant expression.
```
constexpr int mf= 20; //ok can be caculate during compile time 
consexpr int size = mf + 1// ok, because mf + 1 is also a constant expression
constexpr int sz = size()//  only if size() is a constexpr function// suchas sizeof() can be caculate in compile time

//we can define constexpre function us C++11 feature,Such functions must be simple enough that the compiler can evaluate them at compile time.
```

because constexpr can be certainly evaluated at compile time, only the literal type(which is simple enough to have literal values), when we evaluated it at compile time, we can say it is zero cost in runtime.


## type alias 类型别名
type alias is a synonym for other type.  
type aliass let us simplify complicated type definitions, making it easy to use.  
type alisas also let us emphasize the purpose which the type is used

类型别名有两种声明方式
```
alias name type;
using name = type;(C++11)
```
we can deifine a type alias in one of two ways:  
- Traditionally, we use a typedef
```
typedef  double* DoublePtr;
typedef DoublePtr Dptr, *dptr;//Dptr is alias of double*, dptr is alias of double**
```
Declaration that include typedef define type alias rather than variables  

- the C++11 standard introduced a second way to define a type alias, via a alias declaration  

```
using DPtr = double*;
using SI = Sale_item; // SI is synonym for Sale_item.
```
A alias declaration starts with a key word using followed by the alias name and an =,  
The alias declaration defines a name on the left-hand sise of the =, as an alias for the type that appears on the right-hand.

Declarations that use type aliases that represent compound types and const can yield  
surprising results. For example, the following declarations use the type pstring,  
which is an alias for the the type char*:
```
typedef char *pstring;
const pstring cstr = 0; // cstr is a constant pointer to char
const pstring *ps; // ps is a pointer to a constant pointer to char
```

time alians the time machine user