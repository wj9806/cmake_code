#include <iostream>
using namespace std;

int main() {
    int N =100;
    int sum = 0;
    int i = 0;
    while (i <= N)
    {
        /* code */
        sum += i;
        i++;
    }
    
    cout << "sum=" << sum << endl;
    return 0;
}