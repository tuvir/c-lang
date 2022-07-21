#include <stdio.h>
#include <stdlib.h>
// ! structures are made outside the main function
typedef struct Person
    {
        double salary;
        int age;
    } person; // * this is the alias of Struct person, created by typedef
    //person1;
    // ! struct variables can also be declared before the main function
    // ! but the variable value will be declared in main function anyway
    
int main (void){
    // struct Person person1; // ! "struct" - datatype, "person1" - variable name;
    // person1.age = 25;
    // person1.salary = 15000.32;
    // ! variables can be declared in one line, like this
    person person1 = {.age = 25, .salary = 1500.32};
    // * instead of calling ste struct by "struct Person" we only use alias "person"
    printf("Age of person: %d\nSalary of person: %.2lf\n", person1.age, person1.salary);
    
    return 0;
}