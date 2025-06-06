#include <iostream>
#include <string>

using namespace std;

int main()
{
    // create a variable named row of int type to keep track of the number of rows for the half square and initial it with the value 5.
    int rows = 5;

    // create a variable named width to keep track of the width of the each row and initial it with the value 5. 
    int width = 5;

    // loop over each of the rows using the variable row 
    for (int i = 0; i < rows; i++) {

        // loop over the width of the and for each iteration print a #
        for (int j = 0; j < width; j++) {
            cout << "#";
        }
        // before moving on the the next row reduce the width with one. 
        width -= 1;

        // before moving on the the next row print a new line. 
        cout << "\n";
    }
    // return 0 to indicate the end of the program. 
    return 0;
}
