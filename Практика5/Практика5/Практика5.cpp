#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    float a, b, s1 = 0, s2 = 0, s3 = 0, s4 = 0,s5=0;
    cout << "Введите количество шагов" << "\n";
    cin >> n;
    float* x = new float[n], * y = new float[n], * xy = new float[n], * x2 = new float[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите x" << i + 1 << "\n";
        cin >> x[i];
        s1 += x[i];
        x2[i] = x[i] * x[i];
        s4 += x2[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Введите y" << i + 1 << "\n";
        cin >> y[i];
        s2 += y[i];
        xy[i] = x[i]*y[i];
        s3 += xy[i];
    }
    cout << "массив иксов" << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << "\n";
    cout << "Массив игреков" << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << y[i] << " ";
    }
    cout << "\n";
    cout << "Массив произведений x на y " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << xy[i] << " ";
    }
    cout << "\n";
    cout << "Массив x^2" << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << x2[i] << " ";
    }
    cout << "\n";
    a = (n * s3 - s1 * s2) / (n * s4 - s1 * s1);
    b = (s2 - a * s1) / n;
    cout << "Коэфицент a=" << a << "\n";
    cout << "Коэфицент b=" << b << "\n";
    cout << "y=" << a << "x+" << b << "\n";
    for (int i = 0; i < n; i++)
    {
        s5 += (y[i] - (a * x[i] + b))*(y[i] - (a * x[i] + b));
    }
    cout << "Погрешность расчетов составляет:" << s5;
}


