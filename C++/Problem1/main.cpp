#include <iostream>

using namespace std;

int main() {
    cout << "Beginning..." << endl;
    int sum = 0;
    for(int i = 3; i<1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    cout << "The sum is "<<sum<<endl;
    cout << "Terminating..." << endl;
    return 0;
}