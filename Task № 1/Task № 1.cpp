// Task № 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

int main() {
    std::ifstream read("in.txt");
    if (read.is_open()) {
        int size;
        read >> size;
        int* arr = new int[size];
        for (int i = 0; i < size; ++i) {
            read >> arr[i];
        }
        int size_2;
        read >> size_2;
        int* arr_2 = new int[size_2];
        for (int i = 0; i < size_2; ++i) {
            read >> arr_2[i];
        }

        std::ofstream record("out.txt");

        if (record.is_open()) {

            record << size_2 << '\n';
            record << arr_2[size_2 - 1] << " ";

            for (int i = 0; i < size_2 - 1; ++i) {
                record << arr_2[i] << " ";
            }
            record << '\n';
            record << size << '\n';
            
            for (int i = 1; i < size; ++i) {
                record << arr[i] << " ";
            }

            record << arr[0];
        } else {
            std::cout << "The file is not opened for recording";
        }
        record.close();
        delete[] arr;
        delete[] arr_2;

    } else {
        std::cout << "The file is not opened for reading";
    }
    read.close();


 


    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
