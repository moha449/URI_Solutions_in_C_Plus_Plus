#include <iostream>
using namespace std;

int main()
{
    int a;

    while(cin >> a){

        if(a >= 1001 && a <= 9999){
            cout << a-1 << endl;
        }
    }

    return 0;
}
