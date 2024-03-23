#include <iostream>
using namespace std;

int pengurangan(int a, int b){
    return a-b;
}

float tambah (float c, float d){
    return c+d;
}

int main (){
    int a = 16;
    int b = 7;
    float c = 23;
    float d = 17;
    cout << "Hasil pengurangan dari 16-7 = " << pengurangan(a,b) << endl;
    cout << "Hasil tambah dari 23+17 = " << tambah(c,d) << endl;
    return 0;
}