#include<iostream>
using namespace std;

bool is_prime(int num)
{
    // 当 num <= 3 时，质数有 2 和 3
    
    if (num <= 3) {
        return num > 1;
    }

    // 当 num > 3 时，质数无法被比它小的数整除
    for (int i = 2; i < num; i++) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main2() {

    int count = 1;

    for (int i = 0; i < 10000; i++)
    {
        if (is_prime(i) && count <= 200)
        {
            if (count % 10 == 0 && count != 0)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << " ";
            }
            count++;
        }
    }

	system("pause");

	return 0;
}