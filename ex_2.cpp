#include <iostream>
#include <chrono>
using namespace std;

int find_even_sum_fibo(int limit)
{
    int sum = 0; 
    int fibo_0 = 1;
    int fibo_1 = 1;
    int fibo = fibo_0 + fibo_1;
    while (fibo < limit)
    {
        if (fibo % 2 == 0)
        {
            sum += fibo;
        }
        fibo_0 = fibo_1;
        fibo_1 = fibo;
        fibo = fibo_0 + fibo_1;
    }
    return sum;
}

int main()
{
	clock_t time_req;
    int outcome;
    auto start = std::chrono::high_resolution_clock::now(); 
    outcome = find_even_sum_fibo(4e6);
    auto stop = std::chrono::high_resolution_clock::now(); 
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start); 
    std::cout << "The outcome is " << outcome << "!\n";
    time_req = clock() - time_req;
    cout << "It took " << duration.count() << " microseconds" << endl;

}