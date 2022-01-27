#include <iostream>
using namespace std;
 
int main()
{
    int n;
    long GT= 1;
    cout << "Nhap so n: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        GT  = GT  * i;
    }
    cout << "Giai thua cua " << n << " la " << GT  << endl;
    return 0;
}
