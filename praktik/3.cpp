#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU");

    string input;
    cout << "Введите строку для поиска email-адресов: ";
    getline(cin, input);

    // регулярное выражение взял в инете
    regex emailRegex(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}\b)");

    smatch matches; // хранение результа поиска
    cout << "Найденные email-адреса: " << endl;
    while (regex_search(input, matches, emailRegex)) {
        cout << " " << matches[0] << endl; // вывод найденный email
        input = matches.suffix(); // del iz stroki
    }
    // пример ввода: Мои контакты: example@mail.com, test_user+123@test.co.uk, а это не email: user@.
    // скопипастите если хотите проверить
    return 0;
}
