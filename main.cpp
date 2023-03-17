#include <iostream>
#include <list>
#include <vector>

using namespace std;


struct NewStruct
{
int firstNumber;
int secondNumber;
int thirdNumber;
int fourthNumber;
int fifthNumber;
};


class Car
{
    string brand;
    string model;
    int year;
    int speed;
    string color;
    string NameofOwner;
    //int price;
    //еще че нибудь
public:
    Car(string n_brand, string n_model, int n_year, int n_speed, string n_color, string n_NameofOwner)
    {
        brand = n_brand;
        model = n_model;
        year = n_year;
        speed = n_speed;
        color = n_color;
        NameofOwner = n_NameofOwner;

//        cout << "Ваша машина:\n" << "Бренд:" + brand << endl<< "Модель:" + model << endl <<
//        "Год:" <<  year << endl << "Скорость:" <<  speed << endl;
    }

    void prikol()
    {
        color = "Красный";
    }

    void prikol2()
    {
        if(NameofOwner == "Саша")
        {
            speed = speed - 100;
        }
    }

    int increaseSpeed()
    {
        speed = speed*2;
        return speed;
    }

    int decreaseSpeed()
    {
        speed = speed-speed;
        return speed;
    }

    string getBrand()
    {
        return brand;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    int getSpeed()
    {
        return speed;
    }
};

class Truck : public Car
{
    int payloadCapacity;
    bool musor;
    int sizeofwheel;
public:
    Truck(string nBrand, string nModel, int nYear, int nSpeed, int payLoad, string ncolor, string nnameofowner, bool nmusor, int nsizeofwheel) : Car(nBrand, nModel, nYear, nSpeed,ncolor,nnameofowner) {
        payloadCapacity = payLoad;
        musor = nmusor;
        sizeofwheel = nsizeofwheel;

    }


    int getPayloadCapacity()
    {
        return payloadCapacity;
    }

    int prikol3()
    {
        while (sizeofwheel > 100)
        {
            sizeofwheel += 20;
        }
    }

    int prikol4()
    {
        if(musor = true)
        {
            cout << "К сожалению, у вас мусорный транспорт";
        }
    }
};


void SuperSpeed(list<Car> newlist, list<Truck> newlist2, int vibor)
{
    vector<int> speed;
    for(auto i : newlist)
    {
        speed.push_back(i.getSpeed());
    }
    if(vibor == 1)
    {
        sort(speed.begin(), speed.end());//получаем скорость в порядке возрастания
        cout << "Сортировка в порядке возрастания скорости:" << endl;
        for (auto i : speed)
        {
            for (auto n : newlist)
            {
                if(n.getSpeed() == i)
                {
                    cout << "Бренд:" << n.getBrand() << " Модель:" << n.getModel() << " Год выпуска:" << n.getYear() << " Скорость:" << n.getSpeed() << endl;
                }
            }
        }

        cout << "-----------------" << endl;
        speed.clear();
        for(auto i : newlist2)
        {
            speed.push_back(i.getSpeed());
        }
        sort(speed.begin(), speed.end());//получаем скорость в порядке возрастания
        cout << "Сортировка в порядке возрастания скорости:" << endl;
        for (auto i : speed)
        {
            for (auto n : newlist2)
            {
                if(n.getSpeed() == i)
                {
                    cout << "Бренд:" << n.getBrand() << " Модель:" << n.getModel() << " Год выпуска:" << n.getYear() << " Скорость:" << n.getSpeed() << " Грузоподъемность:" << n.getPayloadCapacity() << endl;
                }
            }
        }
    }
    else
    {
        speed.clear();
        for(auto i : newlist)
        {
            speed.push_back(i.getSpeed());
        }
        sort(speed.begin(), speed.end(), greater<>());//получаем скорость в порядке убывания
        cout << "Сортировка в порядке убывания скорости:" << endl;
        for (auto i : speed)
        {
            for (auto n : newlist)
            {
                if(n.getSpeed() == i)
                {
                    cout << "Бренд:" << n.getBrand() << " Модель:" << n.getModel() << " Год выпуска:" << n.getYear() << " Скорость:" << n.getSpeed() << endl;
                }
            }
        }
        speed.clear();
        for(auto i : newlist2)
        {
            speed.push_back(i.getSpeed());
        }
        cout << "----------" << endl;
        sort(speed.begin(), speed.end(), greater<>());//получаем скорость в порядке убывания
        cout << "Сортировка в порядке убывания cкорости:" << endl;
        for (auto i : speed)
        {
            for (auto n : newlist2)
            {
                if(n.getSpeed() == i)
                {
                    cout << "Бренд:" << n.getBrand() << " Модель:" << n.getModel() << " Год выпуска:" << n.getYear() << " Скорость:" << n.getSpeed() << " Грузоподъемность:" << n.getPayloadCapacity() << endl;
                }
            }
        }

    }
}

void God(list<Car> newlist, list<Truck> newlist2, int vibor)
{

   vector<int> years;
   for(auto i : newlist)
   {
       years.push_back(i.getYear());
   }
   if(vibor == 1)
   {
       sort(years.begin(), years.end());//получаем года в порядке возрастания
       cout << "Сортировка в порядке возрастания года выпуска:" << endl;
       for (auto i : years)
       {
           for (auto n : newlist)
           {
               if(n.getYear() == i)
               {
                   cout << "Бренд:" << n.getBrand() << " Модель:" << n.getModel() << " Год выпуска:" << n.getYear() << " Скорость:" << n.getSpeed() << endl;
               }
           }
       }
       cout << "-----------------" << endl;
       years.clear();
       for(auto i : newlist2)
       {
           years.push_back(i.getYear());
       }
       sort(years.begin(), years.end());//получаем года в порядке возрастания
       cout << "Сортировка в порядке возрастания года выпуска:" << endl;
       for (auto i : years)
       {
           for (auto n : newlist2)
           {
               if(n.getYear() == i)
               {
                   cout << "Бренд:" << n.getBrand() << " Модель:" << n.getModel() << " Год выпуска:" << n.getYear() << " Скорость:" << n.getSpeed() << " Грузоподъемность:" << n.getPayloadCapacity() << endl;
               }
           }
       }
   }
   else
   {
       years.clear();
       for(auto i : newlist)
       {
           years.push_back(i.getYear());
       }
       sort(years.begin(), years.end(), greater<>());//получаем года в порядке убывания
       cout << "Сортировка в порядке убывания года выпуска:" << endl;
       for (auto i : years)
       {
           for (auto n : newlist)
           {
               if(n.getYear() == i)
               {
                   cout << "Бренд:" << n.getBrand() << " Модель:" << n.getModel() << " Год выпуска:" << n.getYear() << " Скорость:" << n.getSpeed() << endl;
               }
           }
       }
       years.clear();
       for(auto i : newlist2)
       {
           years.push_back(i.getYear());
       }
       cout << "------------" << endl;
       sort(years.begin(), years.end(), greater<>());//получаем года в порядке убывания
       cout << "Сортировка в порядке убывания года выпуска:" << endl;
       for (auto i : years)
       {
           for (auto n : newlist2)
           {
               if(n.getYear() == i)
               {
                   cout << "Бренд:" << n.getBrand() << " Модель:" << n.getModel() << " Год выпуска:" << n.getYear() << " Скорость:" << n.getSpeed() << " Грузоподъемность:" << n.getPayloadCapacity() << endl;
               }
           }
       }

   }









}

void poisk(list<Car> newlist)
{
    cout << "Введите марку ИЛИ модель машины:";
    string search;
    cin >> search;
    for (auto i : newlist)
    {
        if(i.getModel() == search || i.getBrand() == search)
        {
            cout << "Такая машина есть и вот ее параметры:" << endl;
            cout << i.getBrand() << "  " << i.getModel() << "  " << i.getYear() << "  " << i.getSpeed() << endl;
            break;
        }
    }
}

int main() {
    Car First("Мерс","S-класс",2010,100,"Зеленый","Саша");
//    cout << "-----" << endl;
    Car Second("Киа","Optima",2025,80,"Черный","Иван");
    Car Third("Ока","Premium",2030,30,"Желтый","Дима");
    Car Fourth("Бмв","X5M",2018,150,"Фиолетовый","Данил");
    Car Fifth("Ауди","E-Tron",2020,500,"Красный","Егор");
//    cout << "-----" << endl;
    //Изменение скорости
    cout << "Бренд:" << First.getBrand() << endl;
    cout << "Увеличенная скорость:" << First.increaseSpeed() << endl;
//    cout << "Уменьшенная скорость:" << First.decreaseSpeed() << endl;
    //Методы get
    cout << "Брэнд:" << First.getBrand() << endl;
    cout << "Модель:" << First.getModel() << endl;
    cout << "Год выпуска:" << First.getYear() << endl;
    cout << "Скорость:" << First.getSpeed() << endl;
    //Создание экземпляра класса Truck
    cout << "-----------------------------------------" << endl;
    Truck Kamaz("Камаз","Новая",2025,100,1000000,"Оранжевый","Андрей", true,10);
//    cout << Kamaz.getPayloadCapacity() << endl;
//    cout << "-----" << endl;
    Truck Kamaz2{"НеКамаз","Старая",2010,500,200,"Черный","Евгений", false,20};
//    cout << Kamaz2.getPayloadCapacity() << endl;
//    cout << "-----" << endl;
    Truck Kamaz3{"Топовый камаз","СуперНовая",1999,18,185,"Коричнеый","Денис", true,50};
//    cout << Kamaz2.getPayloadCapacity() << endl;
//    cout << "-----" << endl;
    Truck Kamaz4{"Плохой камаз","Старая",1890,5,25,"Сиреневый","Илья",false,1};
//    cout << Kamaz2.getPayloadCapacity() << endl;
//    cout << "-----" << endl;
    Truck Kamaz5{"Хороший камаз","Новая",2023,1435,673,"Синий","Валерий",false,100};
//    cout << Kamaz2.getPayloadCapacity() << endl;

    list<Car> list1;
    list1.push_back(First);
    list1.push_back(Second);
    list1.push_back(Third);
    list1.push_back(Fourth);
    list1.push_back(Fifth);
    for (auto i : list1) {
        cout << "Бренд машины:" << i.getBrand() << endl;
        cout << "Модель машины:" << i.getModel() << endl;
        cout << "Год выпуска машины:" << i.getYear() << endl;
        cout << "Скорость машины:" << i.getSpeed() << endl;
        cout << "---------" << endl;
    }


    list<Truck> list2;
    list2.push_back(Kamaz);
    list2.push_back(Kamaz2);
    list2.push_back(Kamaz3);
    list2.push_back(Kamaz4);
    list2.push_back(Kamaz5);
    for(auto i : list2)
    {
        cout << "Брэнд грузовика:" << i.getBrand() << endl;
        cout << "Модель грузовика:" << i.getModel() << endl;
        cout << "Год выпуска грузовика:" << i.getYear() << endl;
        cout << "Скорость грузовика:" << i.getSpeed() << endl;
        cout << "Грузоподъемность грузовика:" << i.getPayloadCapacity() << endl;
        cout << "---------" << endl;
    }

    cout << "Поиск по бренду или модели:";
    poisk(list1);//поиск по модели или бренду




    int vibor = 0;
    cout << "Переходим к сортировке по году выпуска\n1 - Сортировка по возрастанию\n2 - Сортировка по убыванию\n3 - Выход";
    cin >> vibor;
    while(vibor != 3)
    {
        God(list1,list2,vibor);
        cout << "Переходим к сортировке по году выпуска\n1 - Сортировка по возрастанию\n2 - Сортировка по убыванию\n3 - Выход";
        cin >> vibor;
    }

    int vibor2 = 0;
    cout << "Переходим к сортировке по скорости\n1 - Сортировка по возрастанию\n2 - Сортировка по убыванию\n3 - Выход";
    cin >> vibor2;
    while(vibor2 != 3)
    {
        SuperSpeed(list1,list2,vibor2);
        cout << "Переходим к сортировке по скорости\n1 - Сортировка по возрастанию\n2 - Сортировка по убыванию\n3 - Выход";
        cin >> vibor2;
    }


//задание со структурой
    NewStruct f = {5,30,6,8,1};
    int numbers[5];
    numbers[0] = f.firstNumber;
    numbers[1] = f.secondNumber;
    numbers[2] = f.thirdNumber;
    numbers[3] = f.fourthNumber;
    numbers[4] = f.fifthNumber;


    int n = sizeof(numbers)/sizeof(numbers[0]);
//    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
//        for (int j = 0; j < sizeof(numbers)/sizeof(numbers[0]) - i; j++) {
//            if (numbers[j] > numbers[j + 1]) {
//                temp = numbers[j];
//                numbers[j] = numbers[j + 1];
//                numbers[j + 1] = temp;
//            }
//        }
//    }
    sort(numbers, numbers+n);

    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); ++i) {
        cout << numbers[i] << endl;
    } //выводит рандомные числа (иногда)




    cout << "--------" << endl;

    sort(numbers, numbers+n, greater<>());

    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); ++i) {
        cout << numbers[i] << endl;
    } //выводит рандомные числа (иногда)

}
