#include <iostream>
#include <string>

using namespace std;


int main() {
    
    setlocale(LC_ALL, "ru");

    string vedeno;
    cout << "введите строку: ";
    getline(cin, vedeno);

    
    if (vedeno.empty()) {
        cout << "нет строки." << endl;
        return 0;
    }

    cout << "групп с четным количеством символов:" << endl;

    int k = 1; // Ñ÷åò÷èê ñèìâîëîâ â òåêóùåé ãðóïïå
    bool gruppi = false;

    // Ïðîõîäèì ïî ñòðîêå, íà÷èíàÿ ñî âòîðîãî ñèìâîëà
    for (size_t i = 1; i <= vedeno.size(); ++i) {
        // Åñëè òåêóùèé ñèìâîë ñîâïàäàåò ñ ïðåäûäóùèì è íå êîíåö ñòðîêè
        if (i < vedeno.size() && vedeno[i] == vedeno[i - 1]) {
            k++;
        }
        else {
            // Ãðóïïà çàâåðøèëàñü
            if (k % 2 == 0) {
                // Âûâîäèì ãðóïïó
                cout << string(k, vedeno[i - 1]) << endl;
                gruppi = true;
            }
            // Ñáðàñûâàåì ñ÷åò÷èê äëÿ íîâîé ãðóïïû
            k = 1;
        }
    }

    if (!gruppi) {
        cout << "групп чисео не найдено." << endl;
    }

    return 0;
}
