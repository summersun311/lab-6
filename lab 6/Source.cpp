#include <iostream>
#include <string>

using namespace std;


int main() {
    
    setlocale(LC_ALL, "ru");

    string vedeno;
    cout << "Введите строку из нулей и единиц: ";
    getline(cin, vedeno);

    
    if (vedeno.empty()) {
        cout << "Строка пуста." << endl;
        return 0;
    }

    cout << "Группы с четным количеством символов:" << endl;

    int k = 1; // Счетчик символов в текущей группе
    bool gruppi = false;

    // Проходим по строке, начиная со второго символа
    for (size_t i = 1; i <= vedeno.size(); ++i) {
        // Если текущий символ совпадает с предыдущим и не конец строки
        if (i < vedeno.size() && vedeno[i] == vedeno[i - 1]) {
            k++;
        }
        else {
            // Группа завершилась
            if (k % 2 == 0) {
                // Выводим группу
                cout << string(k, vedeno[i - 1]) << endl;
                gruppi = true;
            }
            // Сбрасываем счетчик для новой группы
            k = 1;
        }
    }

    if (!gruppi) {
        cout << "Групп с четным количеством символов не найдено." << endl;
    }

    return 0;
}