# BossCoder
 Learning, Coding and Interviews

# C++

Simple printing stuff: (end lines with ";")
int - %d 32 bit, long - %ld 64 bit, char - %c char type, float - %f 32 bit real, double - %lf 64 bit real
scanf(" format_specifier ", &val)
cin >> val
printf("Prince Sehrawat")
cout << "Hello Prince"

# Conditionals :
#1
if (condition) {
    statement1;
    ...
}

#2
if (condition) {
    statement1;
    ...
}
else {
    statement2;
    ...
}

#3
if(first condition) {
    ...
}
else if(second condition) {
    ...
}
.
.
.
else if((n-1)'th condition) {
    ....
}
else {
    ...
}

# Loops :
#1
for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>

for(int i = 0; i < 10; i++) {
    ...
}

Functions :
Functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.

# Function in general
return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
    ...
    ...
    ...
    [if return_type is non void]
        return something of type `return_type`;
}

#
int sum_of_four(int a, int b, int c, int d) {
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}

# Pointers :
A pointer in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable, but it does not have ownership.

In order to access the memory address of a variable, , prepend it with  sign. For example, &val returns the memory address of .

This memory address is assigned to a pointer and can be shared among functions. For example, int *p = &val assigns the memory address of val to pointer p. To access the content of the memory pointed to, prepend the variable name with a *. For example, *p will return the value stored in  and any modification to it will be performed on val.

#
void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  