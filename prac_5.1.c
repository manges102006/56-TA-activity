1?? What is C language?
C is a general-purpose, procedural programming language developed in the early 1970s. It provides low-level access to memory and is widely used for system programming.

2?? Why is C known as a mother language?
C is called the mother language because many languages like C++, Java, and Python have borrowed syntax, concepts, and features from C.

3?? Why is C called a mid-level programming language?
C is called mid-level because it combines features of both high-level and low-level languages. It supports system programming (low-level) and application programming (high-level).

4?? Who is the founder of C language?
Dennis Ritchie developed C at Bell Labs in 1972.

5?? When was C language developed?
C was developed in 1972.

6?? What are the features of C language?
Simple and efficient

Rich library

Low-level memory access

Fast execution

Structured programming

Portable

7?? What is the use of printf() and scanf() functions?
printf() ? prints output to the console

scanf() ? reads formatted input from the user

Example:

c
Copy
Edit
printf("Enter a number: ");
scanf("%d", &num);
8?? What is the difference between local variable and global variable in C?
Local: declared inside a function, accessible only within that function.

Global: declared outside all functions, accessible throughout the program.

9?? What is the use of a static variable in C?
Retains its value between function calls.

Scope is local to the function, but lifetime is throughout the program.

?? What is the use of the function in C?
Functions help:

Break down complex problems.

Reuse code.

Improve readability and maintainability.

1??1?? What is the difference between call by value and call by reference in C?
Call by value: copies actual value, changes don’t affect original variable.

Call by reference: uses address, changes affect original variable (via pointers).

1??2?? What is recursion in C?
A function calling itself is recursion.

Example:

c
Copy
Edit
int factorial(int n) {
    if(n == 0) return 1;
    else return n * factorial(n - 1);
}
1??3?? What is an array in C?
An array is a collection of elements of the same type stored in contiguous memory.

Example:

c
Copy
Edit
int arr[5];
1??4?? What is a pointer in C?
A pointer stores the address of another variable.

Example:

c
Copy
Edit
int *p, x = 10;
p = &x;
1??5?? What is the usage of the pointer in C?
Dynamic memory allocation

Arrays and strings

Functions call by reference

Data structures (e.g. linked list)

1??6?? What is a NULL pointer in C?
A pointer with no valid address assigned (NULL).

c
Copy
Edit
int *p = NULL;
1??7?? What is a far pointer in C?
Used in 16-bit architecture to access memory outside the current segment (not used in modern systems).

1??8?? What is dangling pointer in C?
A pointer that points to memory that has been freed.

1??9?? What is pointer to pointer in C?
A pointer that stores the address of another pointer.

Example:

c
Copy
Edit
int x = 10;
int *p = &x;
int **pp = &p;
2??0?? What is static memory allocation?
Memory allocated at compile time.

Example:

c
Copy
Edit
int arr[10];
2??1?? What is dynamic memory allocation?
Memory allocated at runtime using functions like malloc(), calloc().

2??2?? What functions are used for dynamic memory allocation in C language?
malloc()

calloc()

realloc()

free()

2??3?? What is the difference between malloc() and calloc()?
malloc() ? allocates uninitialized memory

calloc() ? allocates and initializes memory to zero

2??4?? What is the structure?
A structure is a user-defined data type that groups related variables of different types.

Example:

c
Copy
Edit
struct Student {
    int id;
    char name[20];
};

25. What is a union?
A union is a user-defined data type in C where all members share the same memory location.

c
Copy
Edit
union Data {
    int i;
    float f;
    char str[20];
};
26. What is an auto keyword in C?
auto declares automatic local variables (default storage class for local variables).

c
Copy
Edit
auto int a = 10;  // same as int a = 10;
27. What is the purpose of sprintf() function?
sprintf() writes formatted output to a string.

c
Copy
Edit
char str[100];
sprintf(str, "Value: %d", 10);
28. Can we compile a program without main() function?
No, the C program requires main() as the entry point.

29. What is a token?
A token is the smallest element in a C program (keyword, identifier, constant, string literal, operator, or symbol).

30. What is command line argument?
Arguments passed to main() via the terminal at runtime:

c
Copy
Edit
int main(int argc, char *argv[]) { }
Where argc = argument count, argv = argument vector (array).

31. What is the acronym for ANSI?
American National Standards Institute

32. What is the difference between getch() and getche()?

getch() reads a character without echoing it.

getche() reads a character and echoes it.

33. What is the newline escape sequence?
\n moves the cursor to the next line.

34. Who is the main contributor in designing C language after Dennis Ritchie?
Brian Kernighan.

35. What is the difference between near, far, and huge pointers?
These are specific to 16-bit systems:

near: 16-bit pointer, access within current segment.

far: 32-bit pointer, can access any memory segment.

huge: 32-bit pointer, allows pointer arithmetic across segments.

36. What is the maximum length of an identifier?
31 characters (in standard C).

37. What is typecasting?
Converting one data type to another.

c
Copy
Edit
float f = 3.5;
int i = (int)f;  // i = 3
38. What are the functions to open and close a file in C?

c
Copy
Edit
FILE *fp = fopen("file.txt", "r");  
fclose(fp);
39. Can we access the array using a pointer in C language?
Yes:

c
Copy
Edit
int arr[] = {1, 2, 3};
int *p = arr;
printf("%d", *(p + 1));  // prints 2
40. Write a program to print "Hello world" without using a semicolon

c
Copy
Edit
#include <stdio.h>
int main() {
    if (printf("Hello world")) { }
    return 0;
}
41. Write a program to swap two numbers without using the third variable

c
Copy
Edit
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d", a, b);
    return 0;
}
42. Fibonacci without recursion

c
Copy
Edit
#include <stdio.h>
int main() {
    int n = 10, t1 = 0, t2 = 1, next;
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return 0;
}
43. Fibonacci with recursion

c
Copy
Edit
#include <stdio.h>
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
int main() {
    int n = 10;
    for (int i = 0; i < n; i++)
        printf("%d ", fib(i));
    return 0;
}
44. Prime number check

c
Copy
Edit
#include <stdio.h>
int main() {
    int n = 7, flag = 1;
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
45. Palindrome check

c
Copy
Edit
#include <stdio.h>
int main() {
    int n = 121, rev = 0, temp = n;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
46. Factorial without recursion

c
Copy
Edit
#include <stdio.h>
int main() {
    int n = 5, fact = 1;
    for (int i = 1; i <= n; ++i)
        fact *= i;
    printf("%d", fact);
    return 0;
}
47. Factorial with recursion

c
Copy
Edit
#include <stdio.h>
int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n-1);
}
int main() {
    printf("%d", fact(5));
    return 0;
}
48. Armstrong number

c
Copy
Edit
#include <stdio.h>
#include <math.h>
int main() {
    int n = 153, sum = 0, temp = n, r;
    while (n != 0) {
        r = n % 10;
        sum += pow(r, 3);
        n /= 10;
    }
    if (sum == temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
49. Reverse a number

c
Copy
Edit
#include <stdio.h>
int main() {
    int n = 1234, rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("%d", rev);
    return 0;
}
 
50. What is a pointer on pointer?
A pointer on pointer is a pointer that stores the address of another pointer. Example: int **ptr;

51. Distinguish between malloc() & calloc() memory allocation.

malloc(size) allocates uninitialized memory.

calloc(n, size) allocates memory and initializes it to zero.

52. What is keyword auto for?
auto specifies automatic storage class (default for local variables). It tells the compiler to allocate memory automatically at runtime.

53. What are the valid places for the keyword break to appear?
Inside switch, for, while, and do-while loops.

54. Explain the syntax for for loop.

c
Copy
Edit
for(initialization; condition; increment/decrement) {
   // body of the loop
}
55. What is difference between including the header file with-in angular braces < > and double quotes " "?

< > searches for the file in standard system directories.

" " searches in the current directory first, then system directories.

56. How a negative integer is stored.
Negative integers are stored in two's complement form.

57. What is a static variable?
A static variable retains its value between function calls and has a lifetime equal to the program duration.

58. What is a NULL pointer?
A pointer that does not point to any valid memory location (usually 0).

59. What is the purpose of extern storage specifier?
It declares a variable that is defined in another file or location, making it accessible across multiple files.

60. Explain the purpose of the function sprintf().
sprintf() writes formatted data to a string (instead of the console like printf).

61. What is the meaning of base address of the array?
The address of the first element of the array.

62. When should we use the register storage specifier?
When we want a variable to be stored in a CPU register for faster access.

63. What is a dangling pointer?
A pointer pointing to a memory location that has been freed/deallocated.

64. What is the purpose of the keyword typedef?
typedef gives a new name (alias) to an existing data type.

65. What is lvalue and rvalue?

lvalue: An object that has an identifiable location (can appear on the left of =).

rvalue: A value that does not have an address (appears on the right of =).

66. What is the difference between actual and formal parameters?

Actual parameters: Arguments passed to a function during the call.

Formal parameters: Variables defined in the function to receive the actual parameters.

67. Can a program be compiled without main() function?
It can compile but not link/execute, as main() is the entry point.

68. What is the advantage of declaring void pointers?
A void * pointer can store the address of any data type, making it flexible.

69. Where an automatic variable is stored?
In the stack.

70. What is a nested structure?
A structure containing another structure as its member.

71. What is the difference between variable declaration and variable definition?

Declaration: Tells the compiler a variable exists (no memory allocation).

Definition: Declares and allocates memory.

72. What is a self-referential structure?
A structure that has a member which is a pointer to the same type of structure.

73. Does a built-in header file contain built-in function definition?
No. It contains function declarations (prototypes), not definitions.

