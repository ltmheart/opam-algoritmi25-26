#include <iostream>
#include <windows.h>
#include <cstring> // для strcmp
using namespace std;

// Структура для зберігання даних про автомобіль
struct Car {
    char model[50];
    int year;
    char color[20];
    double price;
};

int main() {
	
	 SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Масив з 6 автомобілів
    Car cars[6] = {
        {"Toyota Corolla", 2001, "red", 4500},
        {"Ford Focus", 2003, "blue", 5000},
        {"Honda Civic", 2001, "red", 5200},
        {"BMW X5", 2010, "black", 15000},
        {"Mazda 6", 2001, "white", 4800},
        {"Audi A4", 2001, "red", 6000}
    };

    // Вивід усіх автомобілів
    cout << "Список усіх автомобілів на складі:\n";
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ") " << cars[i].model
             << ", Рік: " << cars[i].year
             << ", Колір: " << cars[i].color
             << ", Ціна: $" << cars[i].price << endl;
    }

    // Вивід червоних автомобілів, які були випущені у 2001 році
    cout << "\nЧервоні автомобілі, випущені у 2001 році:\n";
    bool found = false;
    for (int i = 0; i < 6; i++) {
        if (cars[i].year == 2001 && strcmp(cars[i].color, "red") == 0) {
            cout << "- " << cars[i].model << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Не знайдено жодного автомобіля.\n";
    }

    return 0;
}

