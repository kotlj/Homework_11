
#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int itter = 0;
    int num_0 = 0;
    int num_1 = 0;
    int result = 0;
    int choise;
    cout << "Choose task:\n1 - from 1 to 100 (%2)\n2 - from X (+) to Y\n3 - C^ - F\n4 - n!\n5 - nmber sepparation\n0 - exit\n";
    cin >> choise;
    system("cls");
    if (choise == 1)
    {
        do
        {
            itter++;
            cout << (itter % 2 == 0 ? itter : num_0) << "\n";
        } while (itter != 100);
    }
    else if (choise == 2)
    {
        cout << "Enter start and end\n";
        cin >> num_0 >> num_1;
        itter = num_0;
        do
        {
            itter++;
            result += itter;
        } while (itter < num_1);
    }
    else if (choise == 3)
    {
        cout << "Enter start and end\n";
        cin >> num_0 >> num_1;
        itter = num_0;
        cout << "\tC\tF\n";
        do
        {
            cout << "\t" << itter << "\t" << 32 + 1.8 * itter << "\n";
        } while (itter < num_1);
    }
    else if (choise == 4)
    {
        cout << "Enter number:\n";
        cin >> num_0;
        result = 1;
        do
        {
            result *= itter;
        } while (itter != num_0);
        cout << result;
    }
    else if (choise == 5)
    {
        cout << "Enter number\n";
        cin >> num_0;
        num_1 = 0;
        do
        {
            num_1 = pow(10, itter);
            result += num_0 / num_1 % 10;
            itter++;
        } while (num_0 / pow(10, itter - 1) != 0);
        cout << itter << "\n" << result;
    }
    else if (choise == 0)
    {
        exit(1);
    }
    cout << "Press any button and 'Enter'\n";
    cin >> result;
    main();
}