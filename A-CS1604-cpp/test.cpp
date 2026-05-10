# include <iostream>
# include <chrono>

using namespace std;

int fibo(int n) {
    if (n <= 1) {
        return n;
    }

    else {
        return fibo(n-1) + fibo(n-2);
    }
}

int main() {
    int i = 1;
    while (i <= 50) {
        auto start = chrono::high_resolution_clock::now();
        
        int result = fibo(i);
        
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> elapsed = end - start;

        cout << "The " << i << "th number of the series is " << result 
             << " (Time: " << elapsed.count() << "s)" << endl;
        i++;
    } 
    return 0;
}