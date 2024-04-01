#include <iostream>
#include <vector>
#include <deque>
#include <list>

using namespace std;
//очереди, стеки списки
vector <int> stek1;
deque <string> stek2_name;
deque <string> stek2_chast;
deque <int> stek2_core;
vector <int> stek3;
deque <double> stek4;
deque <double> stek5_1;
deque <double> stek5_2;
list <double> stek6;
list <double> stek6_1;
list <int> stek7;
list <double> stek8;
list <double> stek8_1;
list <double> stek9;
list <double> stek9_1;
//функции
void input_core() {
    string proz, chast;
    int core;
    cout << "Введите название процессора: ";
    cin >> proz;
    stek2_name.push_back(proz);
    cout << "Введите тактовую частоту процессора: ";
    cin >> chast;
    stek2_chast.push_back(chast);
    cout << "Введите количество ядер процессора: ";
    cin >> core;
    stek2_core.push_back(core);
    cout << "Выполнено успешно !\n";
}
void sout_1() {
    for (int i = 0; i < stek2_core.size(); ++i) {
        if (stek2_core[i] > 1) {
            cout << stek2_name[i] << " " << stek2_chast[i] << " " << stek2_core[i] << "\n";
        }
    }
}
void push_back_3() {
    int x;
    cout << "Введите число: ";
    cin >> x;
    stek3.push_back(x);
    cout << "OK\n";
}
void sout_all_3() {
    int sum = 0;
    cout << "Все эллементы стека: ";
    for (int i = 0; i < stek3.size(); ++i) {
        sum += stek3[i];
        cout << stek3[i] << " ";
    }
    cout << sum << "\n";
}
void pop_3() {
    if (stek3.size() != 0) {
        stek3.pop_back();
        cout << "OK\n";
    }
    if (stek3.size() == 0) {
        cout << "ERROR (пустой вектор)\n";
    }
    
}
void enqueue_4() {
    double x;
    cout << "Введите число: ";
    cin >> x;
    stek4.push_back(x);
    cout << "OK\n";
}
void sout_all_4() {
    cout << "Все эллементы очереди: ";
    for (int i = 0; i < stek4.size(); ++i) {
        cout << stek4[i] << " ";
    }
    cout << "\n";
}
void dequeue_4() {
    if (stek4.size() != 0) {
        stek4.pop_back();
        cout << "OK\n";
    }
    if (stek4.size() == 0) {
        cout << "ERROR (пустой вектор)\n";
    }
}
void sout_12_4() {
    double sum = 0;
    for (int i = 0; i < stek4.size(); ++i) {
        if (abs(stek4[i]) > 12) {
            sum += stek4[i];
        }
    }
    cout << "Ответ на задание, нахождение сумму эллементов по модулю больших 12: " << sum;
}
void enqueue_5() {
    double x;
    cout << "Введите число: ";
    cin >> x;
    stek5_1.push_back(x);
    cout << "OK\n";
}
void enqueue_5_2() {
    double x;
    cout << "Введите число: ";
    cin >> x;
    stek5_2.push_back(x);
    cout << "OK\n";
}
void dequeue_5() {
    if (stek5_1.size() != 0) {
        stek5_1.pop_back();
        cout << "OK\n";
    }
    if (stek5_1.size() == 0) {
        cout << "ERROR (пустая очередь)\n";
    }
}
void dequeue_5_2() {
    if (stek5_2.size() != 0) {
        stek5_2.pop_back();
        cout << "OK\n";
    }
    if (stek5_2.size() == 0) {
        cout << "ERROR (пустая очередь)\n";
    }
}
void Check_5() {
    if (stek5_1.size() >= 2 and stek5_2.size() >= 2) {
        double* P1, * P2, * P3, * P4;
        P1 = &stek5_1[0];
        P2 = &stek5_1[stek5_1.size() - 1];
        P3 = &stek5_2[0];
        P4 = &stek5_2[stek5_2.size() - 1];
        cout << *P1 << " " << *P2 << " " << *P3 << " " << *P4 << "\n";
    }
    if (stek5_1.size() < 2 or stek5_2.size() < 2) {
        double* P1, * P2, * P3, * P4;
        if (stek5_1.size() == 1) {
            double* P1, * P3, * P4;
            string P2;
            P1 = &stek5_1[0];
            P2 = "nill";
            P3 = &stek5_2[0];
            P4 = &stek5_2[stek5_2.size() - 1];
            cout << *P1 << " " << P2 << " " << *P3 << " " << *P4 << "\n";
        }
        if (stek5_2.size() == 1) {
            double* P1, * P2, * P3;
            string P4;
            P1 = &stek5_1[0];
            P4 = "nill";
            P3 = &stek5_2[0];
            P2 = &stek5_2[stek5_1.size() - 1];
            cout << *P1 << " " << *P2 << " " << *P3 << " " << P4 << "\n";
        }
        if (stek5_2.size() == 1 and stek5_1.size() == 1) {
            double* P1, * P3;
            string P4, P2;
            P1 = &stek5_1[0];
            P4 = "nill";
            P3 = &stek5_2[0];
            P2 = "nill";
            cout << *P1 << " " << P2 << " " << *P3 << " " << P4 << "\n";
        }
    }

}
void Do_it_5() {
    int N;
    cin >> N;
    if (N < stek5_2.size()) {
        for (int i = 0; i < N; ++i) {
            stek5_2.push_back(stek5_1[i]);
            stek5_1.pop_front();
        }

    }
    
}
void push_back_6() {
    double x;
    cout << "Введите число: ";
    cin >> x;
    stek6.push_back(x);
}
void Do_it_6() {
    int k = 1;
    for (auto iter = stek6.begin(); iter != stek6.end(); iter++) {
        stek6_1.push_back(*iter);
        if (*iter > 0) {
            if (k >= 1) {
                iter++;
                k = 0;
            }
            
        }
    }
    for (auto iter = stek6_1.begin(); iter != stek6_1.end(); iter++) {
        cout << *iter << " ";
    }

}
void push_back_7() {
    double x;
    cout << "Введите число: ";
    cin >> x;
    stek7.push_back(x);
}
void Do_it_7() {
    double sum = 0, k = 0, cnt = 0;
    for (auto iter = stek7.begin(); iter != stek7.end(); iter++) {
        cnt += 1;
        if (cnt != 2 and cnt != 3) {
            double elem_n = *iter;
            sum += elem_n;
            k += 1;
        }
    }
    cout << "Среднее арифметическое: " << sum / k;
}
void push_back_8() {
    double x;
    cout << "Введите число: ";
    cin >> x;
    stek8.push_back(x);
}
void Do_it_8() {
    int k = 1;
    for (auto iter = stek8.begin(); iter != stek8.end(); iter++) {
        if (abs(*iter) < 5) {
            if (k >= 1) {
                k = 0;
            }

        }
        else {
            stek8_1.push_back(*iter);
        }
        
    }
    for (auto iter = stek8_1.begin(); iter != stek8_1.end(); iter++) {
        cout << *iter << " ";
    }
}
void push_back_9() {
    double x;
    cout << "Введите число: ";
    cin >> x;
    stek9.push_back(x);
}
void Do_it_9() {
    int k = 0;
    double sum = 0;
    for (auto iter = stek9.begin(); iter != stek9.end(); iter++) {
        if (*iter <= 15) {
            sum += *iter;
            k += 1;
        }
        if (*iter <= 25) {
            stek9_1.push_back(*iter);
        }

    }
    cout << sum / k << " ";
    for (auto iter = stek9_1.begin(); iter != stek9_1.end(); iter++) {
        cout << *iter << " ";
    }
}

//основная функция
int main()
{
    int num_of_zad;
    string s;
    setlocale(LC_ALL, "Rus");
    cout << "Введите номер задания: ";
    cin >> num_of_zad;
    switch (num_of_zad)
    {
    case 1:
        int P1, P2, D, x;
        for (int i = 0; i <= 1; ++i) {
            cout << "Введите эллемент стека: ";
            cin >> x;
            stek1.push_back(x);
        }
        cout << "Введите эллемент стека не равный нулю ! ";
        while (cin >> x) {
            if (x == 0) {
                break;
            }
            stek1.push_back(x);
            cout << "Введите эллемент стека: ";
        }
        P1 = stek1[0];
        P2 = stek1.back();
        cout << "Введите D: ";
        cin >> D;
        stek1.push_back(D);
        cout << "Удаленный первый эллемент стека: " << stek1[0] << "\n";
        stek1.erase(stek1.begin());
        for (int i = 0; i < stek1.size(); ++i) {
            cout << stek1[i] << " ";
        }
        break;
    case 2:
        cout << "Список команд:\n";
        cout << "Exit - завершает работу кода (показывает ответ).\n";
        cout << "Plus - иницилизирует работу кода.\n";
        cout << "Начнем: ";
        while (cin >> s) {
            if (s == "Exit" or s == "-") {
                sout_1();
                cout << "Пока\n";
                return 0;
            }
            if (s == "Plus" or s == "+") {
                input_core();
                cout << "Продолжим: ";
            }
        }
        break;
    case 3:
        cout << "Список команд:\n";
        cout << "Print - распечатывает эллементы стека.\n";
        cout << "Plus - добавляет в стек новые эллементы.\n";
        cout << "Del - удаляет из стека последний эллемент.\n";
        cout << "Начнем: ";
        while (cin >> s) {
            if (s == "Print" or s == "=") {
                cout << "Общий список: \n";
                sout_all_3();
                cout << "Продолжим: ";
            }
            if (s == "Plus" or s == "+") {
                push_back_3();
                cout << "Продолжим: ";
            }
            if (s == "Del" or s == "-") {
                pop_3();
                cout << "Продолжим: ";
            }
        }
        break;
    case 4:
        cout << "Список команд:\n";
        cout << "Print - распечатывает эллементы стека.\n";
        cout << "Plus - добавляет в стек новые эллементы.\n";
        cout << "Del - удаляет из стека последний эллемент.\n";
        cout << "== - дает ответ на задание.\n";
        cout << "Начнем: ";
        while (cin >> s) {
            if (s == "Print" or s == "=") {
                cout << "Общий список: \n";
                sout_all_4();
                cout << "Продолжим: ";
            }
            if (s == "Plus" or s == "+") {
                enqueue_4();
                cout << "Продолжим: ";
            }
            if (s == "Del" or s == "-") {
                dequeue_4();
                cout << "Продолжим: ";
            }
            if (s == "==" or s == "=>") {
                sout_12_4();
                return 0;
            }
        }
        break;
    case 5:
        cout << "Список команд:\n";
        cout << "Plus_1 - добавляет в очередь 1 новые эллементы.\n";
        cout << "Del_1 - удаляет из очереди 1 последний эллемент.\n";
        cout << "Plus_2 - добавляет в очередь 2 новые эллементы.\n";
        cout << "Del_2 - удаляет из очереди 2 последний эллемент.\n";
        cout << "Check - выводит P1, P2, P3, P4.\n";
        cout << "Do_it - выводит ответ на задание.\n";
        cout << "Начнем: ";
        while (cin >> s) {
            if (s == "Plus_1" or s == "+1") {
                enqueue_5();
                cout << "Продолжим: ";
            }
            if (s == "Plus_2" or s == "+2") {
                enqueue_5_2();
                cout << "Продолжим: ";
            }
            if (s == "Del_1" or s == "-1") {
                dequeue_5();
                cout << "Продолжим: ";
            }
            if (s == "Del_2" or s == "-2") {
                dequeue_5_2();
                cout << "Продолжим: ";
            }
            if (s == "Check" or s == "?") {
                Check_5();
                cout << "Продолжим: ";
            }
            if (s == "do_it" or s == ">") {
                Do_it_5();
                Check_5();
                cout << "Продолжим: ";
            }
        }
        break;
    case 6:
        cout << "Список команд:\n";
        cout << "Plus - добавляет в очередь 1 новые эллементы.\n";
        cout << "Do_it - выводит ответ на задание.\n";
        cout << "Начнем: ";

        while (cin >> s) {
            if (s == "Plus" or s == "+") {
                push_back_6();
                cout << "Продолжим: ";
            }
            if (s == "Do_it" or s == ">") {
                Do_it_6();
            }
        }
        break;
    case 7:
        cout << "Список команд:\n";
        cout << "Plus - добавляет в очередь 1 новые эллементы.\n";
        cout << "Do_it - выводит ответ на задание.\n";
        cout << "Начнем: ";

        while (cin >> s) {
            if (s == "Plus" or s == "+") {
                push_back_7();
                cout << "Продолжим: ";
            }
            if (s == "Do_it" or s == ">") {
                Do_it_7();
            }
        }
        break;
    case 8:
        cout << "Список команд:\n";
        cout << "Plus - добавляет в очередь 1 новые эллементы.\n";
        cout << "Do_it - выводит ответ на задание.\n";
        cout << "Начнем: ";

        while (cin >> s) {
            if (s == "Plus" or s == "+") {
                push_back_8();
                cout << "Продолжим: ";
            }
            if (s == "Do_it" or s == ">") {
                Do_it_8();
            }
        }
        break;
    case 9:
        cout << "Список команд:\n";
        cout << "Plus - добавляет в очередь 1 новые эллементы.\n";
        cout << "Do_it - выводит ответ на задание.\n";
        cout << "Начнем: ";

        while (cin >> s) {
            if (s == "Plus" or s == "+") {
                push_back_9();
                cout << "Продолжим: ";
            }
            if (s == "Do_it" or s == ">") {
                Do_it_9();
            }
        }
        break;
    default:
        break;
    }
    
}


