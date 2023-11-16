#include<iostream>
using namespace std;

int main() {

    double a, Xn, Xnn;
    cout << "请输入一个数 a ：" << endl;
    cin >> a;

    if (a == 0)
    {
        cout << "a的平方根为：0" << endl;
        system("pause");
        return 0;
    }

    if (a < 0) 
    {
        a = -a;

        Xn = a;
        Xnn = 0.5 * (Xn + a / Xn);

        while ((Xnn - Xn) >= 1e-5|| (Xnn - Xn) <= -(1e-5))
        {
            Xn = Xnn;
            Xnn = 0.5 * (Xn + a / Xn);
        }

        cout << "-a的平方根为：" << Xnn << endl;
    }
    else
    {
        Xn = a;
        Xnn = 0.5 * (Xn + a / Xn);

        while ((Xnn - Xn) >= 1e-5 || (Xnn - Xn) <= -(1e-5))
        {
            Xn = Xnn;
            Xnn = 0.5 * (Xn + a / Xn);
        }

        cout << "a的平方根为：" << Xnn << endl;
    }

    system("pause");

    return 0;
}