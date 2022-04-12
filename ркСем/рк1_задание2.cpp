#include <iostream>
#include <List>
#include <cstring>
#include <fstream>

using namespace std;




char binNumb[32]; //////задание 2
void perevod(int numDecimal) {
    memset(binNumb, 0x00, 32 * sizeof(int));
    for (int i = 0; i < 32; i++) {
        binNumb[i] = ((numDecimal & 1 << i)) ? 0x31 : 0x30;
    }
}

void task2(int a) {
    perevod(a);
    cout << binNumb << endl;
}
char binNum[32];

int main(int argc, char* argv[])
{
   
    task2(20);
    task2(0xFFFFFFFF);
   
    system("pause");
    return 0;
}
