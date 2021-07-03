#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int arr[10];
    string str2 = "aeiouAEIOU";
        cout << "Введите массив: ";
        for (int i = 0; i < 10; i++)    // ввод
        {
            cin >> arr[i];
        }

        int t = 0;
        for (int i = 0; i < sizeof(arr) / sizeof(*arr) - 1 - t; i++) //удаление отрицательных чисел
        {
            if (arr[i] < 0)
            {
                t++;
                for (int j = i; j < sizeof(arr) / sizeof(*arr) - 1; j++)
                {
                    arr[j] = arr[j + 1];   
                }
                i--;
            }
        }
        for (int i = 0; i < sizeof(arr) / sizeof(*arr) - 1 - t; i++)
        {
            cout << arr[i] << " ";    //вывод результата
        }
     






        ////////////////////////
        cout << endl << endl;
        string str;
        cout << "Введите строку: "; 
        cin >> str; // ввод строки

        cout << "Гласные буквы в строке: "; // вывод гласных
        for (int i = 0; i < str.length(); i++) 
            for (int j = 0; j < str2.length(); j++)
                if (str[i] == str2[j])
                    cout << str[i];

        cout << endl;
    
}
