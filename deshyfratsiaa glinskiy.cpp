#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

string decrypt(const string& text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            result += text[i] - 3;
        } else if ((text[i] >= 'а' && text[i] <= 'я') || (text[i] >= 'А' && text[i] <= 'Я')) {
            if (text[i] - 3 >= 'а') {
                result += text[i] - 3;
            } else {
                result += text[i] + 29;
            }
        } else {
            result += text[i];
        }
    }
    return result;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string encryptedText;
    ifstream inFile("encrypted.txt");

    if (inFile.is_open()) {
        getline(inFile, encryptedText);
        inFile.close();

        string decrypted = decrypt(encryptedText);

        cout << "Розшифрований текст: " << decrypted << endl;

        ofstream outFile("decrypted.txt");
        if (outFile.is_open()) {
            outFile << decrypted;
            outFile.close();
            cout << "Результат збережено у файл 'decrypted.txt'" << endl;
        }
    } else {
        cout << "Файл 'encrypted.txt' не знайдено." << endl;
    }

    return 0;
}

