﻿// test21.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

//Ввод дистанции до дачи
double writeDistance()
{
    std::cout << "Расстояние до дачи(км): ";
    double distance{ 0 };
    std::cin >> distance;
    return distance;
}

//Ввод расхода бензина
double writeGasoline()
{
    std::cout << "Расход бензина(литров на 100км пробега): ";
    double gasoline{ 0 };
    std::cin >> gasoline;
    return gasoline;
}

//Ввод цены на один литр бензина
double writePrice()
{
    std::cout << "Цена литра бензина(рубль): ";
    double price;
    std::cin >> price;
    return price;
}

int main()
{
    std::setlocale(LC_ALL, "Rus");
    double distance = writeDistance();
    double gasoline = writeGasoline();
    double price = writePrice();
    std::cout << "Поездка на дачу и обратно обойдётся в " << ((price*gasoline)/100)*(distance*2) <<std::endl;
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
