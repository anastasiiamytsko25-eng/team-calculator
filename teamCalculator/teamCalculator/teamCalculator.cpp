#include <iostream>
using namespace std;
int main() {

// ===== Людина 1: гривня -> долар та євро =====
// double uah_to_usd(double uah, double rate)
// double uah_to_eur(double uah, double rate)



// ===== Людина 2: долар та євро -> гривня =====
// double usd_to_uah(double usd, double rate)
// double eur_to_uah(double eur, double rate)



// ===== Людина 3: метри -> фути =====
double metr, funt = 3.28, result;
cout << "перевід метри в фунти:" << endl;
cout << "введіть метри: ";
cin >> metr;
result = metr * funt;
cout << result;



// ===== Людина 4: Цельсій -> Фаренгейт =====
 double celsius;
    cout << "Введіть температуру в градусах Цельсія: ";
    cin >> celsius;
 double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    cout << celsius << " C = " << fahrenheit << " F" << endl;




// ===== Людина 4: головне меню =====

    return 0;
}
