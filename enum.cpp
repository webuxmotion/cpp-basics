#include <iostream>

using namespace std;

enum Options {
    open,
    close,
    wait_file,
    del = 10
};

struct File {
    float size;
    string name;
    Options options;
};

int main() {
    File my_file;
    my_file.size = 150.5f;
    my_file.name = "text.txt";
    my_file.options = Options::open;

    if (my_file.options == Options::close) {
        cout << "File is closed" << endl;
    }

    return 0;
}