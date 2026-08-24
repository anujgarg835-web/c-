// An enumeration is a user-defined type consisting of a set of named integral constants that can be assigned to a variable. 
// Enumerations are used to represent a collection of related values in a more readable and maintainable way.
#include <iostream>
using namespace std;
enum Direction{
    North,
    South,
    East,
    West
};
int main() {
    Direction dir = North; // Assigning a value from the enumeration to a variable
    switch(dir) {
        case North:
            cout << "Moving North." << endl;
            break;
        case South:
            cout << "Moving South." << endl;
            break;
        case East:
            cout << "Moving East." << endl;
            break;
        case West:
            cout << "Moving West." << endl;
            break;
        
    }
    return 0;
}