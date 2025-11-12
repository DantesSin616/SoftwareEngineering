#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::cin;
using std::string;

enum Days {MONDDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

enum mealPref{NO_PREF, REGULAR, LOW_FAT, VEGGIE};

struct Passenger {
    string name;
    mealPref mealType;
    bool isFreqFlyer; 
    string freqFlyerNo;
};

const char* mealPrefToString(mealPref m) {
    switch (m)
    {
    case NO_PREF: return "NO_PREF";
    case REGULAR: return "REGULAR";
    case LOW_FAT: return "LOW_FAT";
    case VEGGIE: return "VEGGIE";
    default: return "UNKNOW";
    }
}

std::ostream& operator<<(std::ostream& os, const Passenger& p) {
    os  << "Passenger{name: " << p.name
        << ", meal: " << mealPrefToString(p.mealType)
        << ", freq: " << (p.isFreqFlyer ? p.freqFlyerNo : "<none>")
        << "}";
    return os;
}

int main(){
    
    int x, y;

    std::cout << "please enter your numbers:";
    std::cin >> x >> y;

    int sum = x + y;
    // std::<< cout << "Sum is" << sum << std::endl;


    string h = "hello";
    string w = "World";

    // cout << h + ' ' + w;
    // this concatenation allowed by the <string> library

    Passenger pass {"Pocahontas", REGULAR, true, "She is"};

    cout << pass << std::endl;

    Passenger *jhon;

    jhon = new Passenger;
    jhon->name = "Jhon";
    jhon->isFreqFlyer = false;
    jhon->mealType = REGULAR;


    return EXIT_SUCCESS;
}