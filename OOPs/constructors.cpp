#include<bits/stdc++.h>
using namespace std;

class rectangle{
public:
    int len;
    int bre;

    rectangle(){     //default constructor == no args passed
        len = 0;
        bre = 0;
    }

    rectangle(int x, int y){      //parameterised constructor == args passed
        len = x;
        bre = y;
    }

    rectangle(rectangle& r){       //copy constructor == initialise an obj by
        len = r.len;
        bre = r.bre;
    }
};
int main() {
    rectangle r1;
    cout<<r1.len<<" "<<r1.bre<<endl;

    rectangle r2(3,4);
    cout<<r2.len<<" "<<r2.bre<<endl;

    rectangle r3 = r2;
    cout<<r3.len<<" "<<r3.bre<<endl;
}