#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    ifstream inputFile("1.txt");

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) 
        {
            if (line.find("C++") != string::npos) {
                cout << line << endl;
            }
        }
        inputFile.close();
    }
    else {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    return 0;
}
