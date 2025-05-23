#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

string encrypt(const string& text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            result += text[i] + 3;
        } else if ((text[i] >= 'а' && text[i] <= 'я') || (text[i] >= 'А' && text[i] <= 'Я')) {
            if (text[i] + 3 <= 'я') {
                result += text[i] + 3;
            } else {
                result += text[i] - 29;
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

    string inputText;
    cout << "Введи текст для шифрування (до 255 символів): ";
    getline(cin, inputText);

    string encrypted = encrypt(inputText);

    ofstream outFile("encrypted.txt");
    if (outFile.is_open()) {
        outFile << encrypted;
        outFile.close();
        cout << "Текст зашифровано й збережено у файл 'encrypted.txt'" << endl;
    } else {
        cout << "Помилка при записі у файл." << endl;
    }

    return 0;
}

