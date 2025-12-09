// Jeevan Shergill & Christopher Xiao

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


struct ASCII {
    int number;
    char letter;
};
void calcASCII(ASCII [], char, char, int&);
void print(ASCII [], int, fstream& file);

int main() {
    const int SIZE = 62;
    ASCII a[SIZE];
    int pos = 0;

    fstream ASCIIfile ("ASCII.dat", ios::out | ios::binary);

    calcASCII (a, '0', '9', pos);
    calcASCII (a, 'A', 'Z', pos);
    calcASCII (a, 'a', 'z', pos);

    print(a, pos, ASCIIfile);
    return 0;
}

void calcASCII(ASCII array[], char start, char end, int& pos) {
    char ch;
    for (ch = start; ch <= end; ch++) {
        array[pos].letter = ch;
        array[pos].number = int(ch);
        pos++;
    }
}

void print(ASCII array[], int pos, fstream& file) {

    ASCII temp;

    cout << "Character" << setw(15) << "ASCII Table\n";
    cout << "-----------------------\n";

    for (int count = 0; count < pos; count++)
        file.write(reinterpret_cast<char*>(&array[count]), sizeof(array));

    file.close();
    file.open("ASCII.dat", ios::in | ios::binary);

    while (file.read(reinterpret_cast<char*>(&temp), sizeof(temp)))
    {
        cout << temp.letter << setw(17) << temp.number << endl;
    }

}
