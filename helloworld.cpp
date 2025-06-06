#include <iostream>   // For cout and endl
#include <vector>     // For using std::vector
#include <string>     // For using std::string

using namespace std;

int main()
{
    // Initialize a vector of strings with some words
    vector <string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    // Loop through each word and print it with a space
    for (const string& word : msg)
    {
        cout << word << " ";
    }

    // Print a newline at the end
    cout << endl;

    return 0;
}
