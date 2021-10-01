#include <iostream>

using namespace std;

/* 
 * Determine how many choices there are for picking lottery numbers.
 *
 * int numbers: The amount of numbers to choose from.
 * int choose: The amount of numbers to be chosen.
 * Returns the number of 
*/
long double lottery(int numbers, int choose) {
    long double total = 1.0;
    double choices = choose;

    // Calculate n-choose-k
    for (int i = numbers; i > numbers - choose; i--) {
        total = total * (i / choices);
        choices--;
    }

    return total;
}

int main() {
    cout << "Number of choices (51, 6): " << lottery(51, 6) << endl;
    cout << "Number of choices (41, 3): " << lottery(41, 3) << endl;
}