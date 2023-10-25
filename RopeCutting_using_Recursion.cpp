#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: If there is only one disk, move it directly from source to destination
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary peg using destination as the auxiliary peg
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move n-1 disks from auxiliary peg to destination using source as the auxiliary peg
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int numDisks = 3; // Change the number of disks here as needed
    towerOfHanoi(numDisks, 'A', 'C', 'B');
    return 0;
}
