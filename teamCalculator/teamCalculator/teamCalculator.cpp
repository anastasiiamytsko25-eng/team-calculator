#include <iostream>
using namespace std;

// ===== Людина 1: гривня -> долар та євро =====
// double uah_to_usd(double uah, double rate)
// double uah_to_eur(double uah, double rate)



// ===== Людина 2: долар та євро -> гривня =====
// double usd_to_uah(double usd, double rate)
// double eur_to_uah(double eur, double rate)



// ===== Людина 3: метри -> фути =====
// double meters_to_feet(double meters)



// ===== Людина 4: Цельсій -> Фаренгейт =====
double celsius_to_fahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}
// double celsius_to_fahrenheit(double celsius)



// ===== Людина 4: головне меню =====
int main() {
    int choice;
    double value, rate;

    cout << "Unit converter\n";
    cout << "1 - UAH -> USD\n";
    cout << "2 - UAH -> EUR\n";
    cout << "3 - USD -> UAH\n";
    cout << "4 - EUR -> UAH\n";
    cout << "5 - Meters -> Feet\n";
    cout << "6 - Celsius -> Fahrenheit\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        cout << "Exchange rate (UAH per 1 USD/EUR): ";
        cin >> rate;
        cout << "Amount: ";
        cin >> value;
        if (choice == 1) cout << uah_to_usd(value, rate) << " USD\n";
        else if (choice == 2) cout << uah_to_eur(value, rate) << " EUR\n";
        else if (choice == 3) cout << usd_to_uah(value, rate) << " UAH\n";
        else cout << eur_to_uah(value, rate) << " UAH\n";
    } else if (choice == 5) {
        cout << "Meters: ";
        cin >> value;
        cout << meters_to_feet(value) << " ft\n";
    } else if (choice == 6) {
        cout << "Celsius: ";
        cin >> value;
        cout << celsius_to_fahrenheit(value) << " F\n";
    } else {
        cout << "Invalid choice\n";
        return 1;
    }
   
    return 0;
}