#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    string namefile, strok1, strok2, strok3, strok4, strok5;

    cout << "Имя файла: ";
    cin >> namefile;

    cin.ignore();

    cout << "Напиши 5 строчек которые будут в текстовике: " << endl;
    getline(std::cin, strok1);
    getline(std::cin, strok2);
    getline(std::cin, strok3);
    getline(std::cin, strok4);
    getline(std::cin, strok5);

    ofstream f(namefile);

    if (f.is_open()) {
        f << strok1 << "\n";
        f << strok2 << "\n";
        f << strok3 << "\n";
        f << strok4 << "\n";
        f << strok5 << "\n";
        f.close();
    }
    else {
        cout << "Ошибка открытия файла!" << endl;
    }

    return 0;
}
