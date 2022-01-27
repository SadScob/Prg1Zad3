#include <iostream>
#include <vector>

using namespace std;

class Punkt{
private: int x;
private:int y;
public:
    void change (int a, int b){
        x = a;
        y = b;
    }

public: vector<int> set_XY(Punkt b){
         vector<int> vec;
         vec.push_back(b.x);
         vec.push_back(b.y);
        return vec;
    }

};

auto main() -> int{
 Punkt one, two;
 vector<int> vec;
 one.change(1,2);
 two.change(5,3);

 vec = one.set_XY(one);
 cout << vec[0] << " " << vec[1] << endl;

 return 0;
}
