#include <iostream>
using namespace std;

struct guru{
    string nama;
    int umur;
};

int main()
{
    guru guru1;

    guru1.nama = "Alex";
    guru1.umur = 30;

    cout<<"Nama : "<<guru1.nama<<endl;
}
