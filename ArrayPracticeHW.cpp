#include <iostream>
#include <ctime>
#include <algorithm>
#include <cmath>

using namespace std;

void hw1()
{
    cout << "\t1) Создайте массив из всех чётных чисел от 2 до 20 и выведите элементы массива на экран сначала в строку,\n";
    cout << "\tотделяя один элемент от другого пробелом, а затем в столбик(отделяя один элемент от\n";
    cout << "\tдругого началом новой строки).Перед созданием массива подумайте, какого он будет размера.\n" << endl;
       
    const int size = 7; // меняется на любое другое
    int arr[size];
    cout << "Print raw array of even numbers : " << endl;
    for (int i = 1; i < size; i++)
    {
        arr[i] = i;
        if (i % 2 == 0)
            cout << arr[i] << ' ';
    }
    cout << endl;
    cout << "Print column array of even numbers: " << endl;
    for (int i = 1; i < size; i++)
    {
        arr[i] = i;
        if (i % 2 == 0)
            cout << arr[i] << endl;
    }
    cout << endl;
} 

void hw2()
{
    cout << "\t2) Создайте массив из всех нечётных чисел от 1 до 99,\n";
    cout << "\tвыведите его на экран в строку, а затем этот же массив выведите на экран тоже в строку,\n";
    cout << "\tно в обратном порядке(99 97 95 93 … 7 5 3 1)\n" << endl;
    
    int size = 99/2+1;
    int* array = new int[size];
    for (int i = 0; i< size; i++)
    {
        array[i] = i * 2 + 1;
        cout << array[i] << ' ';
    }
    cout << endl;
    for (int i = size-1; i >=0; i--) //reverse
    {
        cout << array[i] << ' ';
    }
    delete[] array;
    cout << '\n' << endl;
}

void hw3()
{
    cout << "\t3) Создайте массив из 15 случайных целых чисел из отрезка[0; 9].Выведите массив на экран.\n";
    cout << "\tПодсчитайте сколько в массиве чётных элементов и выведете это количество на экран на отдельной строке.\n" << endl;
        
    int arr[15];
    int count_of_even_numbers=0;
    cout << "Generated array be like: " << '\n';
    for (int i = 0; i < 15; i++)
    {
        arr[i] = rand() % 9+1;
        cout << arr[i] << ' ';
        if (arr[i] % 2 == 0)
        {
            count_of_even_numbers++;
        }
    }
    cout << endl << endl;
    cout << "Amount of even numbers = " << count_of_even_numbers << endl << endl;
}

void hw4()
{
    cout << "\t4) Создайте массив из 8 случайных целых чисел из отрезка[1; 10].Выведите массив на экран в строку.\n";
    cout << "\tЗамените каждый элемент с нечётным индексом на ноль.Снова выведете массив на экран на отдельной строке.\n" << endl;
    
    int arr[8], i;
    for (i = 0; i < 8; i++)
    {
        arr[i] = rand() % 10 + 1;
        cout << arr[i] << ' ';
    }
    cout << endl;
    for (i = 0; i < 8; i++)
    { 
        if (i % 2 != 0)
            arr[i] = 0;
            cout << arr[i] << ' ';
    }
    cout << '\n' << endl;
}

void hw5()
{
    cout << "\t5) Создайте 2 массива из 5 случайных целых чисел из отрезка[0; 5] каждый, выведите массивы на экран \n";
    cout << "\tв двух отдельных строках. Посчитайте среднее арифметическое элементов каждого массива и сообщите, \n";
    cout << "\tдля какого из массивов это значение оказалось больше (либо сообщите, что их средние арифметические равны).\n" << endl;
    
    const int size = 5;
    double armARR1 = 0.0, armARR2 = 0.0; //ср арифм
    int arr1[size], arr2[size];
    for (int i = 0; i < size; i++)
    {
        arr1[i] = rand() % 5;
        armARR1 += arr1[i];
        cout << arr1[i] << ' ';
    }
    cout << "ARM (arithmetic mean) is " << armARR1 / size;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        arr2[i] = rand() % 5;
        armARR2 += arr2[i];
        cout << arr2[i] << ' ';
    }
    cout << "ARM (arithmetic mean) is " << armARR2 / size;
    cout << '\n' << endl;
    if (armARR1 / size > armARR2 / size)
    {
        cout << "ARM (arithmetic mean) of 1st array is bigger for " << (armARR1 / size - armARR2 / size) << endl;
    }
    else if (armARR1 / size < armARR2 / size)
    {
        cout << "ARM (arithmetic mean) of 2nd array is bigger for " << (armARR2 / size - armARR1 / size) << endl;
    }
    else cout << "ARM (arithmetic mean) of both arrays are equal" << endl;
    cout << endl;
}

void hw6()
{
    cout << "\t6) Создайте массив из 4 случайных целых чисел из отрезка[10; 99], выведите его на экран в строку.\n";
    cout << "\tОпределить и вывести на экран сообщение о том, является ли массив строго возрастающей последовательностью.\n" << endl;

    int arr[4], i;
    cout << "Increasing sequence? " << endl;
    for (i = 0; i < 4; i++)
    {
        arr[i] = rand() % 99 + 10;
        cout << arr[i] << ' ';
       
    }
    while (i < 4 && arr[i - 1] < arr[i]) ++i;
    cout << (i < 4 ? " - y, it is" : " - no, it's not") << endl;
    cout << endl;
}

void hw7()
{
    cout << "\t7) Создайте массив из 20 - ти первых чисел Фибоначчи и выведите его на экран.Напоминаем, \n";
    cout << "\tчто первый и второй члены последовательности равны единицам, а каждый следующий — сумме двух предыдущих.\n" << endl;

    int arr[20];
    cout << "First 20 Fibonacci numbers are " << endl;
    for (int i = 0; i < 20; i++)
    {
        arr[i] = (i > 1) ? arr[i - 1] + arr[i - 2] : 1;
        cout << arr[i] << ' ';
    }
    cout <<'\n' << endl;
}

void hw8()
{
    cout << "\t8) Создайте массив из 12 случайных целых чисел из отрезка[-15; 15].Определите какой элемент\n";
    cout << "\t является максимальным и сообщите индекс его последнего вхождения в массив.\n" << endl;

    const int size = 12;
    int arr[size], i;
    int max_value_index=1;
    for (i = 0; i < size; i++)
    {
        arr[i] = rand() % 30-15;
        cout << arr[i] << ' ';
    }
    int max_value = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
            max_value_index = i;
        }
    }
    cout << endl;
    cout << "Max value is " << max_value << "\nits last index " << max_value_index << endl;
    cout << '\n';
}

void hw9()
{
    cout << "\t9) Создайте два массива из 10 целых случайных чисел из отрезка[1; 9] и третий массив из 10 действительных\n";
    cout << "\tчисел.Каждый элемент с i - ым индексом третьего массива должен равняться отношению элемента из первого \n";
    cout << "\tмассива с i - ым индексом к элементу из второго массива с i - ым индексом.Вывести все три массива на экран\n";
    cout << "\t(каждый на отдельной строке), затем вывести количество целых элементов в третьем массиве.\n" << endl;
    
    const int size = 10;
    double arr1[size], arr2[size];
    int i = 0;
    double arr3[size];
    int count=0;

    for (i = 0; i < size; i++) //genrating first 2 int arrays
    {
        arr1[i] = rand() % 9 + 1;
        arr2[i] = rand() % 9 + 1;
        cout << arr1[i] << '\t'; //print 1st
    }
    cout << endl;
    for (i = 0; i < size; i++) cout << arr2[i] << '\t'; //print 2nd
    cout << '\n' << endl;
    for (i = 0; i < size; i++) //calc 3rd array
    {
        arr3[i] = arr1[i] / arr2[i];
        cout.precision(2); //limit for afterdot symbols
        cout << arr3[i] << '\t'; //print 3 array

        double param = arr3[i]; double intpart; //setting components of double number
        double fractpart = modf(param, &intpart); //intpart = before dot, fractpart = after dot

        if (fractpart == 0) count++; // checkup for parameters of fractpart
   //     printf("%f=%f+%f\n", param, intpart, fractpart); //checkup for modf works
    }
    cout << count;
    cout << '\n' << endl;
}

void hw10()
{
    cout << "\t10) Создайте массив из 11 случайных целых чисел из отрезка[-1; 1], выведите массив на экран в строку.\n";
    cout << "\tОпределите какой элемент встречается в массиве чаще всего и выведите об этом сообщение на экран.\n";
    cout << "\tЕсли два каких - то элемента встречаются одинаковое количество раз, то не выводите ничего.\n" << endl;
    const int size = 11;
    int arr[size], i;
    int count_negative=0, count_zero=0, count_positive=0;

    for (i = 0; i < size; i++)
    {
        int a = (int)rand() % 3 - 1;
        arr[i] = a;
        cout << arr[i] << ' ';
   }
    for (i = 0; i < size; i++)
    {
        if (arr[i] == -1) { count_negative++; }
        if (arr[i] == 0) { count_zero++; }
        if (arr[i] == 1) { count_positive++; }
    }
    cout << endl<<endl;
    if ((count_negative > count_zero && count_negative > count_positive) && !(count_zero == count_positive))
        cout << "The most repeatable num is -1, it repeated " << count_negative << " times" << endl;
    if ((count_zero > count_negative && count_zero > count_positive) && !(count_negative == count_positive))
        cout << "The most repeatable num is 0, it repeated " << count_zero << " times" << endl;
    if ((count_positive > count_zero && count_positive > count_negative) && !(count_zero == count_negative))
        cout << "The most repeatable num is 1, it repeated " << count_positive << " times" << endl;
    if (count_negative == count_zero || count_negative==count_positive || count_zero==count_positive)
        cout << "No acceptable conditions. Some nums repeated equal number of times" << endl;
    cout << endl;
}

void hw11()
{
    cout << "\t11) Пользователь должен указать с клавиатуры чётное положительное число, а программа должна создать массив\n";
    cout << "\tуказанного размера из случайных целых чисел из[-5; 5] и вывести его на экран в строку.После этого программа\n";
    cout << "\tдолжна определить и сообщить пользователю о том, сумма модулей какой половины массива больше : левой или правой,\n";
    cout << "\tлибо сообщить, что эти суммы модулей равны. Если пользователь введёт неподходящее число, то программа должна\n";
    cout << "\tтребовать повторного ввода до тех пор, пока не будет указано корректное значение.\n" << endl;
    
    int size;
    
    int i=0, left_side = 0, right_side = 0;
    cout << "Enter positive even integer to set size of array ";
    std::cin >> size; 
    int* arr = new int[size];
    if (size % 2 != 0 || size < 0)
    {
        cout << "Incorrect integer. Retry." << '\n' << endl; //if int != positive even num 
      //  break;
    }
        for (i = 0; i < size; i++)
        {
            arr[i] = rand() % 11 - 5;
            cout << arr[i] << ' ';
            if (i <= size / 2 - 1) left_side += fabs(arr[i]); //fabs = abs = absolute number(independent to positive or negative)
            else right_side += fabs(arr[i]);
            if (i == size - 1) cout << endl;
        }
    
    if (left_side > right_side) cout << "Moduls' sum of the left side of array is bigger and equal to " << left_side << endl;
    if (right_side > left_side) cout << "Moduls' sum of the right side of array is bigger and equal to " << right_side << endl;
    if (left_side == right_side) cout << "Moduls' sum of both sides are equal" << endl;
   
    cout << '\n' << endl;
}

void hw12()
{
    cout << "\t12)Программа должна создать массив из 12 случайных целых чисел из отрезка[-10; 10] таким образом,\n";
    cout << "\tчтобы отрицательных и положительных элементов там было поровну и не было нулей.При этом порядок следования\n";
    cout << "\tэлементов должен быть случаен (т.е.не подходит вариант, когда в массиве постоянно выпадает сначала \n";
    cout << "\t6 положительных, а потом 6 отрицательных чисел или же когда элементы постоянно чередуются через один и пр.).\n";
    cout << "\tВывести полученный массив на экран.\n" << endl;

    int size = 12;
    int* arr = new int[size];
    int positive_numbers = 0, negative_numbers = 0,i;

    for (i = 0; i < size; i++) //0 check
    {
        arr[i] = (int)rand() % 20 - 10;
        if (arr[i] == 0) 
        {
            arr[i] = arr[i] + 1;
        }
    }
    for (i = 0; i < size; i++) // amount of positive and negative nums
    {
        if (arr[i] < 0) negative_numbers++;
        if (arr[i] > 0) positive_numbers++;
    }
    if (positive_numbers > negative_numbers)
    {
        for (int j = 0; j < (positive_numbers - negative_numbers) / 2; j++)
        {
            for (i = 0; i < size; i++)
            {
                if (arr[i] > 0)
                {
                    arr[i] = arr[i] * (-1);
                    break;
                }
            }
        }
    }
    if (positive_numbers < negative_numbers)
    {
        for (i = 0; i < abs((positive_numbers - negative_numbers) / 2); i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr[j] < 0)
                {
                    arr[j] = arr[j] * (-1);
                    break;
                }
            }
        }
    }
    cout << "Array consists of half positive and negative numbers " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{    srand(time(NULL)); setlocale(LC_ALL, "RUS");

        hw1();
        hw2();
        hw3();
        hw4();
        hw5();
        hw6();
        hw7();
        hw8();
        hw9();
        hw10();
        hw11();
        hw12();
    
        return 0;
}


