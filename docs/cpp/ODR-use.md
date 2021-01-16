# What is ODR-use?
看到这里为止，cpp已经变成学术题了， 可以趁机学习一波std::declval()
it seems diffcult to understand the so called `odr-use`, freshmen may feel complicated when the first time hear the terminalogy  

# The impact of virtual on the user of member of class template
it can be describe in this [question](https://stackoverflow.com/questions/19630138/the-impact-of-virtual-on-the-use-of-member-of-class-template?noredirect=1#comment29143561_19630138)  

I (vaguely) know that a template is not instantiated if it is not used. For example, the following code will compile fine even though T::type doesn't make sense when T = int.

```
template<typename T>
struct A
{
    void f() { using type = typename T::type; }
};

A<int> a; //ok
```  

It compiles because f() is not used, so it is not instantiated — thus the validity ofT::type remains unchecked. It doesn't matter if some other member function g() calls f(). 

```
template<typename T>
struct A
{
    void f() { using type = typename T::type; }

    void g() { f(); } //Is f() still unused?
};

A<int> a; //ok
```

This also compile fines. But here I realize the vagueness in my understanding of the definition of "use". I ask:

Is f() still unused? How exactly?
I can clearly see it being used inside g(). But then I thought since g() is not used, f() is not used either, from instantiation point of view. That seems reasonable enough. so far.

However if I add virtual keyword to g(), it doesn't compile:

```
template<typename T>
struct A
{
    void f() { using type = typename T::type; }

    virtual void g() { f(); } //Now f() is used? How exactly?
};

A<int> a; //error
```

It results in compilation error because now it attempts to instantiate f(). I don't understand this behavior.

Could anybody explain this? Especially the impact of virtual keyword on the definition of "use" of member of class template.  

Reason: virtual forces instantiation of the member function because it is now nigh-impossible to statically assess whether this function will be used or not. In practice, you are asking to create a v-table filled with pointers to functions... so the function need exist so we can take a pointer to it.  

it does, member functions of a template class are only instantiated if ODR-used. 

# ODR
No translation unit shall contain more than one definition of any variable, function, class type, enumeration type, template, default argument for a parameter (for a function in a given scope), or default template argument.


https://en.cppreference.com/w/cpp/language/definition

