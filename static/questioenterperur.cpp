#include <iostream>
using namespace std;
class Startup {
    string name;
    int amount;
public:
    friend void checkEligibility(Startup& startup, string n, int m);
};
int main() {
    Startup ram, shyam, amit;
    checkEligibility(ram, "Ram", 120000);
    checkEligibility(shyam, "Shyam", 80000);
    checkEligibility(amit, "Amit", 100000);
    return 0;
}
void checkEligibility(Startup& startup, string n, int m) {
    startup.name = n;
    startup.amount = m;
    cout << startup.name << ": "
         << (startup.amount >= 100000 ? "eligible" : "not eligible") << endl;
}