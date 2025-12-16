// Jeevan Shergill & Christopher Xiao

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


struct ASCII {
    int number;
    char letter;
};
void calcASCII(char, char, fstream&);
void print(fstream& file);

int main() {

    fstream ASCIIfile ("ASCII.dat", ios::out | ios::binary);

    calcASCII ('0', '9', ASCIIfile);
    calcASCII ('A', 'Z', ASCIIfile);
    calcASCII ('a', 'z', ASCIIfile);

    print(ASCIIfile);
    return 0;
}

void calcASCII(char start, char end, fstream& ASC_file) {
    char ch;
    ASCII temp_in;
    for (ch = start; ch <= end; ch++) {
        temp_in.letter = ch;
        temp_in.number = int(ch);
        ASC_file.write(reinterpret_cast<char*>(&temp_in), sizeof(temp_in));
    }
}

void print(fstream& file) {

    ASCII temp;

    cout << "Character" << setw(15) << "ASCII Table\n";
    cout << "-----------------------\n";

    file.close();
    file.open("ASCII.dat", ios::in | ios::binary);

    while (file.read(reinterpret_cast<char*>(&temp), sizeof(temp)))
        cout << temp.letter << setw(17) << temp.number << endl;
    file.close();
}
