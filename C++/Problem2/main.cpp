#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==1){
        return 1;
    }
    if(x<=0) {
        return 0;
    }
    return fibonacci(x-1) + fibonacci(x-2);
}

int main() {
    cout << "Beginning..." << endl;
    int sum_of_positive_fib_numbers = 0;
    int current_term = 0;
    int i = 0;
    while(current_term < 4000000)
    {
        current_term = fibonacci(i);
        if(current_term % 2 == 0)
        {
            sum_of_positive_fib_numbers += current_term;
        }
        i++;
    }
    cout << "Sum of the first "<<i<<" even fibonacci terms is "<<sum_of_positive_fib_numbers<<" .";
    cout << "Terminating..."<< endl;
}