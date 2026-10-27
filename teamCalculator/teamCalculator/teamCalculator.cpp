#include <iostream>
using namespace std;
int main() {

// ===== Людина 4: головне меню =====
int choice;
  cout << "\n===== КОНВЕРТЕР ВЕЛИЧИН =====" << endl;
    cout << "1. Гривня -> долар та євро" << endl;
    cout << "2. Долар та євро -> гривня" << endl;
    cout << "3. Метри -> фути" << endl;
    cout << "4. Цельсій -> Фаренгейт" << endl;
    cout << "0. Вихід" << endl;
    cout << "Ваш вибір: ";
    cin >> choice;
 switch (choice){
  case 1:{
 
// ===== Людина 1: гривня -> долар та євро =====
// double uah_to_usd(double uah, double rate)
// double uah_to_eur(double uah, double rate)
    break;
  }

 case 2:{
// ===== Людина 2: долар та євро -> гривня =====
// double usd_to_uah(double usd, double rate)
// double eur_to_uah(double eur, double rate)
   break;
 }


// ===== Людина 3: метри -> фути =====
 case 3:{
  double metr, funt = 3.28, result;
cout << "перевід метри в фунти:" << endl;
cout << "введіть метри: ";
cin >> metr;
result = metr * funt;
cout << result;
   break;
 }


// ===== Людина 4: Цельсій -> Фаренгейт =====
 double celsius;
    cout << "Введіть температуру в градусах Цельсія: ";
    cin >> celsius;
 double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    cout << celsius << " C = " << fahrenheit << " F" << endl;




 case 0:
            cout << "До побачення!" << endl;
            break;
   default:
            cout << "Невірний вибір, спробуйте ще раз." << endl;
    }

 
    return 0;
}
