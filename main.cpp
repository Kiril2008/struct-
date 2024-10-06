#include <iostream>
using namespace std;

// структура для опису автомобіля
struct Car {
    char make[];     // марка
    char model[];    // модель
    int year;          // рік випуску
    double price;      // ціна
    bool negotiable;   // торг (true - можливий, false - не можливий)
    char engine[];   // двигун
    char color[];    // колір
    int ownerCount;    // кількість власників
};

// прототип функції для виведення інформації про авто
void printCar(const Car& car);

int main() {
    // масив автомобілів
    Car cars[2] = {
        {"Toyota", "Corolla", 2015, 10000.00, true, "1.6L", "White", 1},
        {"BMW", "X5", 2020, 45000.00, false, "3.0L", "Black", 0}
    };

    // виведення інформації про всі автомобілі
    for (int i = 0; i < 2; ++i) {
        printCar(cars[i]);
        cout << endl;
    }

    return 0;
}

// функція для виведення інформації про авто
void printCar(const Car& car) {
    cout << "Марка:" << car.make << endl;
    cout << "Модель:" << car.model << endl;
    cout << "Рік випуску:" << car.year << endl;
    cout << "Ціна:" << car.price << endl;
    cout << "Торг:" << (car.negotiable ? "Можливий" : "Не можливий") << endl;
    cout << "Двигун:" << car.engine << endl;
    cout << "Колір:" << car.color << endl;
    cout << "Кількість власників:" << car.ownerCount << endl;
}


//2
#include <iostream>
using namespace std;

// структура для опису бойлера
struct Boiler {
    char brand[];       // фірма
    char color[];       // колір
    int power;            // потужність
    int volume;           // об'єм
    int temperature;      // температура нагріву
};

// прототип функції для виведення інформації про бойлер
void printBoiler(const Boiler& boiler);

int main() {
    // створюємо бойлер
    Boiler myBoiler = {"bouth", "silver", 1999, 75, 60};

    // виводимо інформацію про бойлер
    printBoiler(myBoiler);

    return 0;
}

// функція для виведення інформації про бойлер
void printBoiler(const Boiler& boiler) {
    cout << "Фірма: " << boiler.brand << endl;
    cout << "Колір: " << boiler.color << endl;
    cout << "Потужність: " << boiler.power << " Вт" << endl;
    cout << "Обєм: " << boiler.volume << " л" << endl;
    cout << "Температура нагріву: " << boiler.temperature << " °C" << endl;
}

