#include <iostream>
#include <cstring>
#include <fstream>
#define P 24000
#define M 8
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    setlocale(LC_ALL, "ru");

    cout << "¬ведите данные о человеке:\n";

    char ch;
    string words[M], pass_array[P], pop_pass;
    int cnt = 0, loc = 0;

    for (int i = 0; (ch = getchar()) != '\n'; ++i)  //  ввод слов 
    {
        cin >> words[i];
        cnt++;
    }

    //  объединение 2 слов 
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = words[i] + words[j];

    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = "_" + words[i] + "_" + words[j] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = "." + words[i] + "." + words[j] + ".";

    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = "_" + words[i] + "_" + words[j];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = "." + words[i] + "." + words[j];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = "_" + words[i] + words[j] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = "." + words[i] + words[j] + ".";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = words[i] + "_" + words[j] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = words[i] + "." + words[j] + ".";

    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = words[i] + words[j] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = words[i] + words[j] + ".";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = words[i] + "_" + words[j];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = words[i] + "." + words[j];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = "_" + words[i] + words[j];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j, loc++)
            pass_array[loc] = "." + words[i] + words[j];


    //  объединение 3 слов 
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + words[j] + words[l];

    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "_" + words[i] + "_" + words[j] + "_" + words[l] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "." + words[i] + "." + words[j] + "." + words[l] + ".";

    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "_" + words[i] + "_" + words[j] + "_" + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "." + words[i] + "." + words[j] + "." + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "_" + words[i] + "_" + words[j] + words[l] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "." + words[i] + "." + words[j] + words[l] + ".";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "_" + words[i] + words[j] + "_" + words[l] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "." + words[i] + words[j] + "." + words[l] + ".";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + "_" + words[j] + "_" + words[l] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + "." + words[j] + "." + words[l] + ".";

    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "_" + words[i] + "_" + words[j] + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "." + words[i] + "." + words[j] + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "_" + words[i] + words[j] + "_" + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "." + words[i] + words[j] + "." + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "_" + words[i] + words[j] + words[l] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "." + words[i] + words[j] + words[l] + ".";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + "_" + words[j] + words[l] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + "." + words[j] + words[l] + ".";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + words[j] + "_" + words[l] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + words[j] + "." + words[l] + ".";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + "_" + words[j] + "_" + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + "." + words[j] + "." + words[l];

    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + words[j] + words[l] + "_";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + words[j] + words[l] + ".";
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + words[j] + "_" + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + words[j] + "." + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + "_" + words[j] + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = words[i] + "." + words[j] + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "_" + words[i] + words[j] + words[l];
    for (int i = 0; i < cnt; ++i)
        for (int j = 0; j < cnt; ++j)
            for (int l = 0; l < cnt; ++l, loc++)
                pass_array[loc] = "." + words[i] + words[j] + words[l];


    //---------------------------------------работа с файлами
    ofstream fout;
    fout.open("generated_passwords.txt");
    ifstream fin;
    fin.open("popular_passwords.txt");

    //  вывод попул€рных паролей
    if (!fin.is_open())
        cout << "File 'popular_passwords' opening error!\n";
    else
        while (!fin.eof()) {
            fin >> pop_pass;
            pass_array[loc] = pop_pass;
            loc++;
            for (int i = 0; i < cnt; ++i, loc++)
                pass_array[loc] = words[i] + pop_pass;
            for (int i = 0; i < cnt; ++i, loc++)
                pass_array[loc] =  pop_pass + words[i];
        }

    //запись в файл
    if (!fout.is_open())
        cout << "File 'generated_passwords' opening error!\n";
    else
        for (int i = 0; i < P; ++i)
            fout << pass_array[i] << '\n';

    fout.close();
    fin.close();

    return 0;
}