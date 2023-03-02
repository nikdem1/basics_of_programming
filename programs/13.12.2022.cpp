//Описать класс с именем Car содержащую следующие поля: страна производитель; объем двигателя; расход топлива на 100 км; цена автомобиля.
//Demidovich Nikita, RUDN, NKAbd-01-22, 13.12.2022

#include <iostream>
#include <cstring>


using namespace std;

class Printer {
private:
    string country_of_manifacture; // страна производитель
    int engine_displacement; // объем двигателя
    int fuel_consumption; // расход топлива на 100 км
    int price; // цена
public:
    Printer(string com, int ed, int fc, int pr) { // Конструктор с 4 параметрами
        country_of_manifacture = com; //страна производитель
        engine_displacement = ed; // объем двигателя
        fuel_consumption = fc; // расход топлива на 100 км
        price = pr; //цена
    }

    Printer() { // Пустой конструктор
        country_of_manifacture = "";
        engine_displacement = 0;
        fuel_consumption = 0;
        price = 0;
    }
    ~Printer() { // Деструктор
    }

    // Функция вывода
    void output() {
        cout << endl << "********************" << endl;
        cout << "Страна производитель: " << country_of_manifacture << endl;
        cout << "Объем двигателя: " << engine_displacement << endl;
        cout << "Расход топлива на 100 км: " << fuel_consumption << endl;
        cout << "Цена: " << price << endl;
    }

    void cost(int m) {
        cout << "Это будет стоить " << m * price << endl;
    }

};

int main() {

    setlocale(LC_ALL, "Russian");
    cout << "Описать класс с именем Car содержащую следующие поля: страна производитель; объем двигателя; расход топлива на 100 км; цена автомобиля. " << endl;

    Printer printer("Германия", 3, 1, 1200000);

    printer.output();


    cout << "Введите сколько автомобилей вы хотите преобрести: ";
    int n;
    cin >> n;

    printer.cost(n);

    return 0;
}
