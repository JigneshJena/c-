#include <iostream>
using namespace std;

void moveDisk(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }
    moveDisk(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    moveDisk(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n; // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;
    moveDisk(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}