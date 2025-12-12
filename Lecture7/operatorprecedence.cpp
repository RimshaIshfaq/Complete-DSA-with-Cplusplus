// Operator Precedence
// means priortiy of operators when evaluating expressions

/*  
    Operator Precedence in C++

    ---------------------------------------------------------
    Operators                     |   Precedence   | Assoc.
    ---------------------------------------------------------

    ! , + , -   (unary operators) |     first      |  R to L

    * , / , %  (arithmetic)       |     second     |  L to R

    + , -      (relational)       |     third      |  L to R

    < , <= , >= , >               |     fourth     |  L to R

    == , !=                       |     fifth      |  L to R

    &&                            |     sixth      |  L to R

    ||                            |     seventh    |  L to R

    =     (assignment operator)   |     last       |  R to L
*/


#include <iostream>
using namespace std;    

int main(){
    cout << (3 * 4 % 2) << endl;
    return 0;
}