#include <iostream>
#include <fstream>

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

    fstream ASCIIfile;

    calcASCII( a, '0', '9', pos);
    calcASCII (a, 'A', 'Z', pos);
    calcASCII (a, 'a', 'z', pos);

    print(a, pos, ASCIIfile);
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
    cout << "Character\tASCII Table\n";
    cout << "-----------------------\n";
    for (int count = 0; count < pos; count++) {
        file.write(reinterpret_cast<char*>(&array), sizeof(array));
        file.close();
        file.open("ASCII.dat", ios::in | ios::binary | ios::app);
        file.read(reinterpret_cast<char*>(&array), sizeof(array));
        file.close();
        file.open("ASCII.dat", ios::out | ios::binary | ios::app);
    }

    for (int count = 0; count < pos; count++) {
        cout << array[count].letter << "\t\t\t" << array[count].number << "\n";
    }
}
