#include <iostream>

using namespace std;

class Punkt{
private: int x;
private:int y;
public:
    void num (int a, int b){
        x = a;
        y = b;
    }

    int get_x(){return x;}
    int get_y(){return y;}
    
    public:void show(){
        cout << x << " " <<  y << endl;
    }
};

auto main() -> int{
 Punkt one, two;
 one.num(1,2);
 two.num(5,3);
  one.show();
  two.show();
cout <<"x: "<< one.get_x() << " " <<"y: "<<one.get_y() << endl;
    return 0;
}
