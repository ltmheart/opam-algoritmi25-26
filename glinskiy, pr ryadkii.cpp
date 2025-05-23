#include <iostream>
#include <cstring>  
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Вхідні дані
    char text[] = "Разумей Світлана Олександрівна";

    // cпосіб 1: використ функцій string.h
    int lengthA = strlen(text); // довжина рядка
    int countA = 0;

    for (int i = 0; i < lengthA; i++) {
        if (text[i] == 'а' ) {
            countA++;
        }
    }

    cout << "Довжина рядка: " << lengthA << endl;
    cout << "Кількість літер 'а': " << countA << endl;
    
    // спосіб 2, масив
    int lengthB = 0;
    int countB = 0;

    while (text[lengthB] != '\0') {
        if (text[lengthB] == 'а' ) {
            countB++;
        }
        lengthB++;
    }

 cout << "-------------------------------\n";
    cout << "Спосіб 2: " << endl;
    cout << "Довжина рядка: " << lengthB << endl;
    cout << "Кількість літер 'а': " << countB << endl;
    
    int wordLengths[3] = {0, 0, 0};
    int wordIndex = 0;

    for (int i = 0; i <= lengthA; i++) {
        if (text[i] == ' ' || text[i] == '\0') {
            wordIndex++;
            if (wordIndex > 2) break; 
        } else {
            wordLengths[wordIndex]++;
        }
    }

cout << "-------------------------------\n";
    cout << "\nДовжина кожного слова:" << endl;
    cout << "Прізвище: " << wordLengths[0] << " символів" << endl;
    cout << "Ім’я: " << wordLengths[1] << " символів" << endl;
    cout << "По батькові: " << wordLengths[2] << " символів" << endl;

    return 0;
}

