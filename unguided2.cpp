#include <iostream>
using namespace std;

struct Mobil {
    string merek;
    string model;
    string tipe;
    int harga;
};

class Mobil2 {
    private:
        string merek;
        string model;
        string tipe;
        int harga;
    public:
        void setMerek(string merek) {
            this->merek = merek;
        }
        void setModel(string model) {
            this->model = model;
        }
        void setTipe(string tipe) {
            this->tipe = tipe;
        }
        void setHarga(int harga) {
            this->harga = harga;
        }
        string getMerek() {
            return this->merek;
        }
        string getModel() {
            return this->model;
        }
        string getTipe() {
            return this->tipe;
        }
        int getHarga() {
            return this->harga;
        }
};

int main () {
    Mobil mobil1;
    mobil1.merek = "Toyota";
    mobil1.model = "Innova";
    mobil1.tipe = "MPV";
    mobil1.harga = 426900000;
    cout << "Merek mobil = " << mobil1.merek << endl;
    cout << "Model mobil = " << mobil1.model << endl;
    cout << "Tipe mobil = " << mobil1.tipe << endl;
    cout << "Harga mobil = " << mobil1.harga << endl;

    Mobil2 mobil2;
    mobil2.setMerek("Honda");
    mobil2.setModel("Civic");
    mobil2.setTipe("Hatchback");
    mobil2.setHarga(616800000);
    cout << "Merek mobil = " << mobil2.getMerek() << endl;
    cout << "Model mobil = " << mobil2.getModel() << endl;
    cout << "Tipe mobil = " << mobil2.getTipe() << endl;
    cout << "Harga mobil = " << mobil2.getHarga() << endl;
    return 0;
}