// #include<iostream>
// using namespace std;
// class marks{
//     public:
//     int maths;
//     int science;
//     marks(){
//         maths=0;
//         science=0;
//     }
//     //copy constructor
//     marks(const marks &obh)
//     {
//         maths=obh.maths;
//         science=obh.science;
//     }
//     void display(){
//         cout<<"Maths: "<<maths<<endl;
//         cout<<"Science: "<<science;
//     }
// };
// int main(){

// marks m1;
// marks m2(m1);
// m2.display();
// return 0;

// }
#include <iostream>
using namespace std;

float calculateCharges(int units) {
    float charges = 0;

    if (units <= 100) {
        charges = units * 0.60;
    } else if (units <= 300) {
        charges = (100 * 0.60) + ((units - 100) * 0.80);
    } else {
        charges = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
    }

    // Minimum charge
    if (charges < 50) {
        charges = 50;
    }

    // Additional surcharge if charges exceed 300
    if (charges > 300) {
        charges += charges * 0.15;
    }

    return charges;
}

int main() {
    string name;
    int units;

    cout << "Enter the name of the user: ";
    getline(cin, name);
    cout << "Enter the number of units consumed: ";
    cin >> units;

    float charges = calculateCharges(units);

    cout << "User: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Charges: Rs. " << charges << endl;

    return 0;
}
