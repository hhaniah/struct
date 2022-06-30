#include <iostream>
using namespace std;

//struct adalah kumpulan dari beberapa variabel misalnya int, float, double, string
struct nilai {
    double mtk;
    double bin;
    double bing;
    double ipa;
};

int main()
{
    nilai alex;
    alex.mtk=90;
    alex.bin=88;
    alex.bing=89;
    alex.ipa=100;

    cout<<"Nilai Matematika alex   \t:"<<alex.mtk<<endl;
    cout<<"Nilai B. Indonesia alex \t:"<<alex.bin<<endl;
    cout<<"Nilai B. Inggris alex   \t:"<<alex.bing<<endl;
    cout<<"Nilai Ipa alex          \t:"<<alex.ipa<<endl;
}
