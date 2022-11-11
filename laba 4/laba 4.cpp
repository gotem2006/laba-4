using namespace std;
#include <iostream>


int func_schet(int j)
{
    int schet = j;
    j++;

    return schet;
}
int j = 1;
void swap(int&, int&);
struct time1
{
    int hours;
    int minutes;
    int seconds;
};
long hms_to_secs(int seconds, int minutes, int hours)
{
    int secondsall;
    secondsall = seconds + (minutes * 60) + (hours * 3600);
    return secondsall;
}
time1 secs_to_time(long seconds)
{
    time1 sum3;
    long res, secs , mins, h, h1;
    res = seconds;
    h = seconds / 3600;
    h1 = seconds % 3600;
    res =  h1;
    mins = res / 60;
    secs = res % 60;
    sum3.seconds = secs;
    sum3.minutes = mins;
    sum3.hours = h;
    cout << "Сумма равна :" << sum3.hours << "." << sum3.minutes << "." << sum3.seconds << endl;
    return sum3;
    
 
}
long time_to_secs(time1 summ, time1 summ2)
{
    int result2;
    result2 = summ.seconds + summ2.seconds + (summ.minutes * 60) + (summ2.minutes * 60) + (summ.hours * 3600) + (summ2.hours * 3600);
    return result2;
}
long time_to_secs2(time1 summ6)
{
    long result6;
    result6 = summ6.seconds  + (summ6.minutes * 60) +  (summ6.hours * 3600) ;
    return result6;
}
void swap1(time1&, time1&);

int main()
{
    setlocale(LC_ALL,"RUSSIAN");


    cout << "Введите номер задания:";
    int a; 
    cin >> a;
    switch (a)
    {
    case 1:
        metka2:
        int s, m, h;
        long result;
        char stop;
        cout << "Введите время в часах, минутах и секундах:";
        cin >> h >> stop >> m >> stop >> s;
        hms_to_secs(s, m, h);
        result = hms_to_secs(s, m, h);
        cout << "Эквивалент времени в секундах:" << result << endl;
        char choice2;
        cout << "Хотите продолжить(y/n):";
        cin >> choice2;
        if (choice2 == 'y')
        {
            goto metka2;
        }
        else
        {
            return main();
        }
        break;
    case 2:
        metka1:
        int choice;
        cout << "Выберите способ решения из трех или ввеидите любой символ чтобы выйти в главное меню:";
        cin >> choice;
        if (choice == 1)
        {
            time1 s1, s2, s3;
            char stopik;
            long resik;
            cout << "Введите первое время:";
            cin >> s1.hours >> stopik >> s1.minutes >> stopik >> s1.seconds;
            cout << "Введите второе время:";
            cin >> s2.hours >> stopik >> s2.minutes >> stopik >> s2.seconds;
            time_to_secs(s1, s2);
            resik = time_to_secs(s1, s2);
            secs_to_time(resik);
            goto metka1;
        }
        if (choice == 2)
        {
            long res5;
            time1 s4;
            char tochka;
            cout << "Ввыедите время в часах, минутах и секундах:";
            cin >> s4.hours >> tochka >> s4.minutes >> tochka >> s4.seconds;
            res5 = time_to_secs2(s4);
            cout << "Время в секундах:" << res5 << endl;
            goto metka1;

        }
        if (choice == 3)
        {
            long secyndi;
            cout << "Введите время в секундах:" ;
            cin >> secyndi;
            secs_to_time(secyndi);
            goto metka1;
        }
        else
        {
            return main();
        }
        break;
    case 3:
        int number1, number2;
        cout << "Введите первое число:";
        cin >> number1;
        cout << "Введите второе число:";
        cin >> number2;
        swap(number1, number2);
        cout << "Первое число: " << number1 << endl << "Второе число: " << number2 << endl;
        return main();
        break;
    case 4:
        time1 b1, b2;
        char sto;
        cout << "Введите первое время:";
        cin >> b1.hours >> sto >> b1.minutes >> sto >> b1.seconds;
        cout << "Введите второе время:";
        cin >> b2.hours >> sto >> b2.minutes >> sto >> b2.seconds;
        swap1(b1, b2);
        cout << "Первое время:" << b1.hours << sto << b1.minutes << sto << b1.seconds << endl;
        cout <<"Второе время:" << b2.hours << sto << b2.minutes << sto << b2.seconds << endl;
        return main();
        break;
    case 5:
        for (int i = 0; i <= 9; i++)
        {
            cout << "Функция вызывалась " << func_schet(j) << " раз." << endl;
            j++;
        }
        return main();
        break;
       
    }
   
    
}
void swap(int& nu1, int& nu2)
{
    int temp;
    temp = nu1;
    nu1 = nu2;
    nu2 = temp;
}
void swap1(time1& nu1, time1& nu2)
{
    time1 temp;
    temp = nu1;
    nu1 = nu2;
    nu2 = temp;
}