#include <iostream>
using namespace std;
 
class test {
    int n;
    public:
    static int count;
    public:
    test() {
        n=0;
        cout<<"object created"<<endl;
        count++;
    }

    ~test() {
        cout<<"Object destroyed"<<endl;
        count--;
        cout<<"no. of objects left:"<<count<<endl;
    }

    static void display(void)
    {
        cout<<"No. of objects:"<<count<<endl;
    }
};
int test::count;

int main() {
    test ob1;
    test ob2;
    test ob3;    
    test::display();
    return 0;
}
