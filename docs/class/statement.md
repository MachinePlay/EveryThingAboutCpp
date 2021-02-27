# Statement
like most programming language, C++ provices statement for conditional execution, loops that repeatedly execute the same code blocks, and jump statement that interupt the flow and control.
 - conditional statment
 - iterative statement
 - range for statement
 - goto statement

# try and exception handling
Exception are run-time anamolies - such as loosing database connection or encounting unexpected input. Dealing with anamolous behavior can be one of the most difficult part of designing any system.  
Exception handling is generally used when the program detects a problem  that the part of program cannot reslove or the detecting part of the program cannot contiue. In such cases, the detecting part of the program needs  a way to signal that something happened and it can not continue, without knowing the what the part of the program will deal with the problem.   

A program that contains code that might raise an exception usually has another part to handle whatever happened.  For example, if the problem is invalid input, the  handling part might ask the user to provide correct input.  

Exception handling supports this coopeartion between detecting and handling part of a problem. In C++ exception handling involves :
- throw expression   which is the detecting part that used to indicate that encounterd something unexpected. We say throws raise an exception. 

- try block which the handling part used to handle the exception. A try block start with a keyword try and ends with more than one catch

# Standard Exception
 - exception
 - run_exception
 - range_error
 - overflow_error
 - underflow_error
 - logic_error
 - domain_error
 - invalid_argument
 - length_error
 - out_of_range
 ```
 try {
    do something;
    throw std::runtime_error("some error.");
 } catch (std::exception &e) {
     std::cout << e.what() << std::endl;
 } catch (...) {
     std::cout << "unexpected error" << std::endl;
 }
 ```