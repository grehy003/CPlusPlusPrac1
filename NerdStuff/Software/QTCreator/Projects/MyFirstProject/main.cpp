#include <cstdio>
using namespace std;

int linkedInCases(int input);

int main()
{
//    int x = 707;
//    int y = 42;

//    printf("x is %d\n", x);
//    printf("y is %d\n", y);
//    printf("The lesser value is %d\n", x < y ? x : y);


   //WHILE AND DO
    /* continue : ends execution of current iteration within loop
     * break : exits loop completely
     * do{} while{} : condition is tested at end of loop iteration
     */

    int array[] = {1, 2, 3, 4, 5};
    int i = 0;
    while (i < 5) {
        printf("array element %d equals %d\n", i, array[i]);
        i++;
    }

//    linkedInCases(2);

    return 0;
}


//CASE/SWITCH STATEMENTS
int linkedInCases (int input) {
    const int iONE = 1;
    const int iTWO = 2;
    const int iTHREE = 3;

    const int iFOUR = 4;

    //Cases require constants
    switch (input) {
    case iONE:
        puts("one");
        break;
    case iTWO:
        puts("two");
        break;
    case iTHREE:
        puts("three");
        break;
    case iFOUR:
        puts("four");
        break;
    default:
        puts("default");
        break;

        return 0;
    }
}

