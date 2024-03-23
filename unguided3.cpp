#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> brand;
    brand["Toyota"] = "Corolla, Innova, Fortuner","Innova","Fortuner";
    brand["Honda"] = "Civic, Brio, HRV";

    cout << "Contoh nama merek mobil Toyota adalah " << brand["Toyota"] << endl;
    cout << "Contoh nama merek mobil Honda adalah " << brand["Honda"] << endl;
    return 0;
}