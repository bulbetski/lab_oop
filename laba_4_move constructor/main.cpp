#include <iostream>
#include <vector>

using std::cout;
using std::endl;

class Move{
public:
    int a;
    Move(int a = 0): a(a){};

    Move(const Move &source): a(source.a){
        cout << "Copy constructor is called" << endl;
    }
    Move(Move &&source): a(source.a){
        cout << "Move constructor is called" << endl;
    }
};

int main() {
    std::vector<Move> t;
    t.push_back(Move(10)); // ~t.emplace_back(10)
    return 0;
}